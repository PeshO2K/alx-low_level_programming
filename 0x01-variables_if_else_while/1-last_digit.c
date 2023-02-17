#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/*
 * main - Entry point
 *
 * Return: 0 Always Success
 */
int main(void)
{
	int n;
	int l;
	char str[] = "";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5){
               strcpy(str,"greater than 5");
        }
        else if (n == 0) {
               strcpy(str,"0");
        }
        else {
               strcpy(str,"less than 6 and not 0");
	/* your code goes there */
	printf("Last digit of %d is %d and is %s\n",n,l,str);

	return (0);
}
