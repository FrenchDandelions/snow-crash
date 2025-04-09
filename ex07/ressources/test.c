#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buf = NULL;
    char *s = getenv("LOGNAME");
    asprintf(&buf, "/bin/echo %s", s);
    printf("%s\n", buf);
    return (system(s));
}
