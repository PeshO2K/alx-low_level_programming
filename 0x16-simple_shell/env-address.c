#include "main.h"


/**
 * main - prints the environment
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{

	extern char **environ;

	printf("env address: %p \n", (void *)env);
	printf("environ address: %p \n",(void *)environ);
	return (0);
}
