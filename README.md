# python-reference

#### package backup with conda
`source activate condaEnv`<br>
`conda env export > environment.yml`<br>
`conda env create --file environment.yml --name environment1`

#### package backup with pip
`env1/pip freeze > requirements.txt`<br>
`env1/pip install -r requirements.txt`

#### To be able to see kernel in jupyter-lab.  Make sure to restart jupyter-lab after these changes:
`source activate environment1`<br>
`conda install ipykernel`<br>
`ipython kernel install --user --name=environment1_jup`<br>
`conda deactivate`

#### To be able to see kernel in jupyter-notebook.  Make sure to restart jupyter-notebook after these changes:
`source activate environment1`<br>
`pip install --user ipykernel`<br>
`python -m ipykernel install --user --name=environment1_jup`

#### find location of conda environment
`where python` or `which python`

#### Ubuntu terminal ssh connection
`ssh -X vbajenaru3@buffet01.cc.gatech.edu`

#### Ubuntu Nautilus file connection
`sftp://vbajenaru3@buffet01.cc.gatech.edu/home/vbajenaru3/`

#### Default Anaconda channels
`defaults`<br>
`conda-forge`<br>
`https://pypi.python.org/`<br>
`https://repo.continuum.io/`<br>
`https://pypi.python.org/simple`<br>
`https://pypi.python.org/pypi`<br>

#### check current python environment information
`import platform`<br>
`print('architecture:', platform.architecture())`<br>
`print('python_version:', platform.python_version())`<br>
` `<br>
`import wheel.pep425tags`<br>
`import pprint`<br>
`print('-wheel.pep425tags.get_supported:')`<br>
`pprint.pprint(wheel.pep425tags.get_supported())`<br>

#### install package with setup.py
`pip install .`

#### install .whl package
`pip install test.whl`

#### install package from Git repository
`pip install -e git+https://github.com/hiive/hiivemdptoolbox#egg=hiive.mdptoolbox`

#### remove large files from git commit history
`git clone --mirror https://github.com/vicb1/computer-vision`<br>
`java -jar /home/vic/_git/python-reference/bfg-1.13.0.jar --strip-blobs-bigger-than 100M computer-vision.git`<br>
`cd computer-vision.git`<br>
`git gc --prune=now --aggressive`
