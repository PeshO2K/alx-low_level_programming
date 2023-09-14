#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, c;
	size_t len, tot;
	char *al = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char password[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	password[0] = al[(len ^ 59) & 63];
	for (i = 0, tot = 0; i < len; i++)
		tot += argv[1][i];
	password[1] = al[(tot ^ 79) & 63];
	for (i = 0, c = 1; i < len; i++)
		c *= argv[1][i];
	password[2] = al[(c ^ 85) & 63];
	for (c = argv[1][0], i = 0; i < len; i++)
		if ((char)c <= argv[1][i])
			c = argv[1][i];
	srand(c ^ 14);
	password[3] = al[rand() & 63];
	for (c = 0, i = 0; i < len; i++)
		c += argv[1][i] * argv[1][i];
	password[4] = al[(c ^ 239) & 63];
	for (c = 0, i = 0; (char)i < argv[1][0]; i++)
		c = rand();
	password[5] = al[(c ^ 229) & 63];
	printf("%s\n", password);
	return (0);
}
