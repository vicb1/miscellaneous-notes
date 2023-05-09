Sonarqube Installation on Ubuntu 20
- Follow instructions here ( https://www.vultr.com/docs/install-sonarqube-on-ubuntu-20-04-lts/ ), with edits as mentioned below
- After performing step 2.8 (`createuser sonar`), run `sudo passwd sonar` ; then change the password to "my_strong_password" (as referenced later on both for the postgres table sonar's password, and within the `sonar.properties`)
- After performing step 5.1, also add line `sonar.host.url=http://127.0.0.1:9000` to your `sudo nano /opt/sonarqube/conf/sonar.properties`
- Stop following the instructions after performing step 5.2 (Save and exit the `sonar.properties` file), and try running `sudo -Hu sonar /opt/sonarqube/bin/linux-x86-64/sonar.sh console` ; then go to `http://127.0.0.1:9000/` with username `admin` and password `admin`. If this doesn't work, check these resulting logs in the terminal, and possibly need to upgrade your Java (i.e. run `sudo apt-get install openjdk-17-jdk` )

Other helpful links
- https://docs.sonarqube.org/latest/setup-and-upgrade/install-the-server/
- https://linux.how2shout.com/install-sonarqube-on-ubuntu-20-04-18-04-server/
- https://learnubuntu.com/change-password/
- https://community.sonarsource.com/t/update-to-sonarqube-9-6-0-59041-missing-files/70117/20
- https://www.vultr.com/docs/how-to-use-sonarqube-on-ubuntu-22-04-lts/

Command I run after Sonarqube is working, within the `project/` directory in a terminal for generating the report (this is only provided as an example, the first and last lines will be different for others):
```
/home/<user>/Documents/sonar-scanner-4.8.0.2856-linux/bin/sonar-scanner \
-Dsonar.projectKey=sonar-minc \
-Dsonar.sources=. \
-Dsonar.host.url=http://127.0.0.1:9000 \
-Dsonar.token=sqp_ebcf79f47aa8ea5604da9ed113b24f1aefe98747
```
