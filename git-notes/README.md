# git-notes

#### remove large files from git commit history
`git clone --mirror https://github.com/vicb1/computer-vision`<br>
`java -jar /home/vic/_git/miscellaneous-notes/bfg-1.13.0.jar --strip-blobs-bigger-than 100M computer-vision.git`<br>
`cd computer-vision.git`<br>
`git gc --prune=now --aggressive`

#### install package from Git repository
`pip install -e git+https://github.com/hiive/hiivemdptoolbox#egg=hiive.mdptoolbox`
