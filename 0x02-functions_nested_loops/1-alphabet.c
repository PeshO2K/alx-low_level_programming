#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 
 */
/*void print_alphabet(void)
{
	int a = 97;
	while(a <=122)
	{
		putchar(a);
	}
	putchar('\n');
}*/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int a =97;
	while(a <= 122)
	{
		putchar(a);
	}
	putchar('\n')
}
