## Docker Image

Prior to using this tool, users may download the precompiled Docker tar file (for the x86_64 platform) from the following link:

[Download Docker tar image](https://drive.google.com/file/d/1CaS17VoucpnJVaxpEM3agvbfqjKOs64h/view?usp=sharing)

After downloading, the image can be loaded using the following command:

```bash
docker load -i dinvg_x86_64.tar.gz
```

## Installation

After installing the released Docker image on the x86_64 platform, navigate to the working directory. In the project root directory on Ubuntu 20.04, compile and use the tool by executing the following commands:

```bash
mkdir build
cd build
cmake ..
make -jN # N is the number of available threads
```

