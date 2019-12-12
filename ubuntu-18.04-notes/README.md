# ubuntu-18.04-notes

#### Monitor Nvidia GPU performance
`watch -d -n 0.5 nvidia-smi`

#### Ubuntu terminal ssh connection
`ssh -X vbajenaru3@buffet01.cc.gatech.edu`

#### Ubuntu Nautilus file connection
`sftp://vbajenaru3@buffet01.cc.gatech.edu/home/vbajenaru3/`

#### Nvidia 1030 GPU install
`wget https://developer.nvidia.com/compute/cuda/8.0/Prod2/local_installers/cuda_8.0.61_375.26_linux-run`
`chmod +x cuda_8.0.61_375.26_linux-run`<br>
`sudo ./cuda_8.0.61_375.26_linux-run --silent --toolkit --samples`<br>
`sudo ubuntu-drivers autoinstall`<br>
`sudo apt install --no-install-recommends nvidia-415-dev`<br>
`sudo apt install --no-install-recommends libcuda1-415`<br>
Additional resource: https://medium.com/@samnco/using-the-nvidia-gt-1030-for-cuda-workloads-on-ubuntu-16-04-4eee72d56791 
