#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int c, v, add = 0;

	if (argc > 1)
	{
		for (v = 1; v < argc; v++)
		{
			for (c = 0; argv[v][c] != '\0'; c++)
			{
				if  (!isdigit(argv[v][c]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[v]);
		}
	}
	printf("%d\n", add);
	return (0);
}
