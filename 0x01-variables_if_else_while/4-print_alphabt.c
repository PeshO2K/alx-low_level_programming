#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
        {
		if (a == 101 || a == 113)
		{
			a++;
		}
		else
		{
			putchar(a);
		}
	}

        putchar('\n');
        return (0);
}
