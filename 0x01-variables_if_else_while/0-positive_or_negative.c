#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char str[13];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		strcpy(str, "is positive");
	}
	else if (n == 0)
	{
		strcpy(str, "is zero");
	}
	else
	{
		strcpy(str, "is negative");
	}
	printf("%d %s\n", n, str);

	return (0);
}
