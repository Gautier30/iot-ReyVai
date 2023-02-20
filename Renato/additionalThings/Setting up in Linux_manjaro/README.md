# Setting Up Manjaro Linux for IoT Empower

## Initial Setting up after fresh install

Change the Terminal to bash

### Give User permission to access USB serial port

Manjaro settings>usr
Click administrator
Show Group
activate UUCP
Log out and in again

### Setting up git and gitHub on Manjaro

I installed VScode and config the git with same usrname/email from gitHub
git config --global user.name "name"
git config --global user.email "email"
Then Git seemed to worked after that


But we choose to set up SSH key for safer connection
run ssh-keygen on terminal
Copy key from .ssh/id_rsa.pub
Paste it on Github in new SSH Key
In the /.git/config from the Repositaory folder Change the HTTP form Url to SSH ex url = ssh://git@github.com/Gautier30/iot-ReyVai.git and save it