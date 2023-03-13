#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	div_t change;
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
		{
			change = div(money, 25);
		}
		else if (money >= 10)
		{
			change = div(money, 10);
		}
		else if (money >= 5)
		{
			change = div(money, 5);
		}
		else if (money >= 2)
		{
			change = div(money, 2);
		}
		else if (money >= 1)
		{
			change = div(money, 1);
		}
		coins += change.quot;
		money = change.rem;
	}
	printf("%d\n", coins);
	return (0);
}
