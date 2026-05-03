import subprocess
import re
import time
from pathlib import Path
from collections import defaultdict
import statistics

RUN_TIMES = 5
SCRIPT_PATH = "./script.sh"
OUTPUT_DIR = Path("./output")

time_pattern = re.compile(r"Execution time:\s*(\d+)\s*ms")

# results[file_name] = [t1, t2, ...]
results = defaultdict(list)

for run_id in range(RUN_TIMES):
    print(f"[INFO] Running script {run_id + 1}/{RUN_TIMES}")
    
    # 运行 bash 脚本
    subprocess.run(["bash", SCRIPT_PATH], check=True)

    # 读取本次生成的所有 txt
    for txt_file in OUTPUT_DIR.glob("*.txt"):
        with open(txt_file, "r", encoding="utf-8") as f:
            for line in f:
                m = time_pattern.search(line)
                if m:
                    t = int(m.group(1))
                    results[txt_file.name].append(t)
                    break

# 统计结果
print("\n===== Statistics =====")
for name, times in sorted(results.items()):
    if len(times) != RUN_TIMES:
        print(f"[WARN] {name}: only {len(times)} samples")
        continue

    avg = statistics.mean(times)
    std = statistics.stdev(times) if RUN_TIMES > 1 else 0.0

    # print(f"{name}: mean = {avg:.2f} ms, std = {std:.2f} ms")
    print(f"{name.split('.')[0]} & ${avg:.2f} \pm {std:.2f}$ & TO \\\\")
