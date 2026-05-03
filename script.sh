#!/bin/bash

INPUT_DIR="benchmark/Success"
OUTPUT_DIR="output"

mkdir -p "$OUTPUT_DIR"

for file in "$INPUT_DIR"/*.c; do
    filename=$(basename "$file" .c)
    output_file="$OUTPUT_DIR/${filename}.txt"

    echo "Processing $file ..."
    bin/Inv sv "$file" > "$output_file" 2>&1
done

echo "All done!"
