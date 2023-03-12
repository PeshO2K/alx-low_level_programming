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
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int v, add = 0;

		for (v = 1; v < argc; v++)
		{
			if  (!isdigit(argv[v]))
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[v]);
		}
		printf("%d\n", add);
	}
	return (0);
}
