# ubuntu-18.04-notes

#### Monitor Nvidia GPU performance
`watch -d -n 0.5 nvidia-smi`

#### Nvidia 1070 GPU install resources
https://developer.nvidia.com/cuda-downloads?target_os=Linux&target_arch=x86_64&target_distro=Ubuntu&target_version=1804&target_type=debnetwork 

https://hackernoon.com/up-and-running-with-ubuntu-nvidia-cuda-cudnn-tensorflow-and-pytorch-a54ec2ec907d 

https://developer.nvidia.com/rdp/cudnn-download 
 
#### Nvidia 1030 GPU install
`wget https://developer.nvidia.com/compute/cuda/8.0/Prod2/local_installers/cuda_8.0.61_375.26_linux-run`
`chmod +x cuda_8.0.61_375.26_linux-run`<br>
`sudo ./cuda_8.0.61_375.26_linux-run --silent --toolkit --samples`<br>
`sudo ubuntu-drivers autoinstall`<br>
`sudo apt install --no-install-recommends nvidia-415-dev`<br>
`sudo apt install --no-install-recommends libcuda1-415`<br>
Additional resource: https://medium.com/@samnco/using-the-nvidia-gt-1030-for-cuda-workloads-on-ubuntu-16-04-4eee72d56791 

#### Anaconda install resources
https://www.digitalocean.com/community/tutorials/how-to-install-the-anaconda-python-distribution-on-ubuntu-18-04

#### Ubuntu terminal ssh connection
`ssh -X vbajenaru3@buffet01.cc.gatech.edu`

#### Ubuntu Nautilus file connection
`sftp://vbajenaru3@buffet01.cc.gatech.edu/home/vbajenaru3/`

#### Turn off smooth scrolling
chrome://flags/#smooth-scrolling

#### scroll speed adjustment
https://askubuntu.com/questions/1030678/speeding-up-the-mouse-wheel-in-ubuntu-18-04 

#### Hide top bar
install "Hide top bar" software

#### Add new keyboard shortcut for taking screenshot and copy to clipboard
Prtscrn key: `gnome-screenshot –ac`

#### Add new keyboard shortcut for taking screenshot and copy to clipboard
CTRL+Prtscrn key: `gnome-screenshot -a –file=[FILENAME]`
