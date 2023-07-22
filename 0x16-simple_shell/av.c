#include "main.h"
int main(int ac, char **av)
{
	(void) ac;
	int i = 1;

	av++;

	while (*av)
	{
		printf("%s\n", *av++);
		i++;
	}
	return (0);
}

