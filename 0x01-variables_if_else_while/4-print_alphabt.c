#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
        int a;
        
        for (a = 97; a < 123 && a != 101 && a != 113, a++)
        {
                putchar(a);
                a++;
        }

        putchar('\n');
        return (0);
}
