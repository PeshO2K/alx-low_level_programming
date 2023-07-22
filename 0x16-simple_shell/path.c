#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_path_directories() {
    char *path = getenv("PATH");
    if (path == NULL) {
        printf("PATH environment variable not found\n");
        return;
    }

    char *token = strtok(path, ":");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
}

int main() {
    print_path_directories();
    return 0;
}
/*
int main(void)
{
	char *path = _getenv("PATH");
	printf("%s\n", path);
	return (0);

}
*/
/*
#include <dirent.h>


int main(void) {
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    return 0;
}
*/
