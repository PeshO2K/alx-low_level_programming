#include <stdlib.h>
#include <string.h>

int _unsetenv(const char *name)
{
    extern char **environ;
    char **ep, **sp;
    size_t len;

    if (name == NULL || *name == '\0' || strchr(name, '=') != NULL)
    {
        return -1;
    }

    len = strlen(name);

    ep = environ;
    while (*ep != NULL)
    {
        if (!strncmp(*ep, name, len) && (*ep)[len] == '=')
        {
            for (sp = ep; *sp != NULL; sp++)
                *sp = *(sp + 1);
        }
        else
        {
            ep++;
        }
    }

    return 0;
}

