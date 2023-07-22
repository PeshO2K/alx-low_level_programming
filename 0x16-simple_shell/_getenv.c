#include "main.h"

char *_getenv(const char *name) 
{    
	    printf("\tEnviron now: %s\n\n", *(environ));

/*int i = 1;*/
    char *s = *environ;

    for (; s; s++) {
        if ((strncmp(name, s, strlen(name)) == 0) && (s[ strlen(name) ] == '=')) {
            return &s[ strlen(name) + 1 ];
        }
        
    }
    return NULL;
}
/*
int main(void) {
    printf("\tInitial environ %s\n\n", *(environ));
    printf("HOME: %s\n", _getenv("HOME"));
    printf("PATH: %s\n", _getenv("PATH"));
    printf("PWD: %s\n", _getenv("PWD"));
    return 0;
}
*/
