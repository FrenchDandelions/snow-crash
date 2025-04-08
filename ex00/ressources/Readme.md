STEP 1:
    Find everything related to flag00 or flag.
    CMD: find / -name "*flag*" 2> /dev/null
STEP 2:
    Check all users since no files were named flag00 or flag related (that isn't part of a lib or anything like that).
    CMD: cat /etc/passwd
STEP 3:
    There's ourselves. Find all files owned by level00.
    CMD:
    Result: Nothing
STEP 4:
    There's a user flag00. Find all files owned by user flag00
