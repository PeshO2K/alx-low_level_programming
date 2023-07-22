#include "main.h"
int main()
{
	char str[] = "Hey i am bobby";
        char str2[] = "Hey i am bobby";
	char *delim = " ";
	char *token, *token2, *strs;

	token = strtok(str, delim);

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

                printf("\n\tUsing the for loop\n");
	for (strs = str2;;strs = NULL)
	{
		token2 = strtok(strs, delim);
		if (token2 == NULL)
		{
			break;
		}
                printf("%s\n", token2);
	}
	return (0);

}
