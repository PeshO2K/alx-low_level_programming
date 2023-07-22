#include "main.h"
int main ()
{
	char *buffer = NULL;
	size_t bufsize = 0;
	size_t nread;
	(void) nread;

	printf("$ ");
	nread = getline(&buffer, &bufsize, stdin);
	printf("%s",buffer);

	return (0);
}
