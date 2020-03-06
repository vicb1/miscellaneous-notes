# ubuntu-18.04-notes

#### move windows to corners
From software installer: install "Put Windows"

#### add Dock
From software installer: install "Dock"

#### add minimize, maximize, close buttons
`gsettings set org.gnome.desktop.wm.preferences button-layout ":minimize,maximize,close"`

#### Smartgit installation
https://www.syntevo.com/smartgit/download/#installation-instructions

#### Anaconda installation
https://www.digitalocean.com/community/tutorials/how-to-install-the-anaconda-python-distribution-on-ubuntu-18-04

#### Pycharm installation
https://www.jetbrains.com/help/pycharm/installation-guide.html#

#### tar unpacking:
`tar xzf <smartgit*.tar.gz>`

#### Hide top bar
install "Hide top bar" software

#### Add new keyboard shortcut for taking screenshot and copy to clipboard
Prtscrn key: `gnome-screenshot –ac` or `gnome-screenshot -ac -a –file=[FILENAME]`

#### Add new keyboard shortcut for taking screenshot and save file
CTRL+Prtscrn key: `gnome-screenshot -a –file=[FILENAME]`

#### Monitor Nvidia GPU performance
`watch -d -n 0.5 nvidia-smi`

#### Nvidia 1070 GPU install resources
- https://developer.nvidia.com/cuda-downloads?target_os=Linux&target_arch=x86_64&target_distro=Ubuntu&target_version=1804&target_type=debnetwork 
- https://hackernoon.com/up-and-running-with-ubuntu-nvidia-cuda-cudnn-tensorflow-and-pytorch-a54ec2ec907d 
- https://developer.nvidia.com/rdp/cudnn-download 
- https://developer.nvidia.com/cuda-gpus
- http://timdettmers.com/2018/12/16/deep-learning-hardware-guide/  
- https://medium.com/deep-learning-turkey/google-colab-free-gpu-tutorial-e113627b9f5d  
 
#### Nvidia 1030 GPU install - not standard
`wget https://developer.nvidia.com/compute/cuda/8.0/Prod2/local_installers/cuda_8.0.61_375.26_linux-run`
`chmod +x cuda_8.0.61_375.26_linux-run`<br>
`sudo ./cuda_8.0.61_375.26_linux-run --silent --toolkit --samples`<br>
`sudo ubuntu-drivers autoinstall`<br>
`sudo apt install --no-install-recommends nvidia-415-dev`<br>
`sudo apt install --no-install-recommends libcuda1-415`<br>
Additional resource:
- https://medium.com/@samnco/using-the-nvidia-gt-1030-for-cuda-workloads-on-ubuntu-16-04-4eee72d56791 

#### Nvidia on Docker
- https://medium.com/the-artificial-impostor/docker-nvidia-gpu-nvidia-docker-808b23e1657
- https://github.com/NVIDIA/nvidia-docker/wiki/Frequently-Asked-Questions#setting-up

#### Ubuntu terminal ssh connection
`ssh -X vbajenaru3@buffet01.cc.gatech.edu`

#### Ubuntu Nautilus file connection
`sftp://vbajenaru3@buffet01.cc.gatech.edu/home/vbajenaru3/`

#### Turn off smooth scrolling
chrome://flags/#smooth-scrolling

#### scroll speed adjustment
https://askubuntu.com/questions/1030678/speeding-up-the-mouse-wheel-in-ubuntu-18-04 

#### virtual monitor
`sudo apt-cache search video-dummy`<br>
`sudo chmod 777 /usr/share/X11/xorg.conf.d`<br>
- Create file /usr/share/X11/xorg.conf.d/xorg.conf
- https://askubuntu.com/questions/453109/add-fake-display-when-no-monitor-is-plugged-in

`sudo chmod -R 777  xorg.conf.d/`

#### Disable animations
![image](https://raw.githubusercontent.com/vicb1/miscellaneous-notes/master/ubuntu-18.04-notes/disable-animations.png)
