#include "main.h"
int main(int ac, char **ag)
{
	(void) ac;

	ag++;
	while(*ag)
	{
		printf("%s\n",*ag++);
	}
	return (0);
}
