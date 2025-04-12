ls
./level10 token

token = no access
reverse level10 executable
client that sends the file (args1) content to a server (args2)
try sending token
-> cannot access
check if access has vulnerability
-> it does (symbolic links https://security.stackexchange.com/questions/42659/how-is-using-acces-opening-a-security-hole)
so first step:
create server python that write content that client sends

second step:
create bash script for the symbolic link to trick the access function

third step:
command line that'll send the content of our symbolic link to the server

scp -P 4246 level10@localhost:~/level10 ~/42/snow-crash/ex10/ressources/.
scp -P 4246 ./ex10/ressources/loop.sh  level10@localhost:/tmp/.
scp -P 4246 ./ex10/ressources/server.py  level10@localhost:/tmp/.
