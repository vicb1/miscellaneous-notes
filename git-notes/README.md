# git-notes

#### remove large files from git commit history
`java -jar /home/vic/_git/miscellaneous-notes/git-notes/bfg-1.13.0.jar --strip-blobs-bigger-than 100M repo`<br>
`cd repo`<br>
`git gc --prune=now --aggressive`

#### install package from Git repository
`pip install -e git+https://github.com/hiive/hiivemdptoolbox#egg=hiive.mdptoolbox`
