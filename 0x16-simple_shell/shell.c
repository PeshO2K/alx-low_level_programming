#include "main.h"

char **parse(const char *cmd, const char *delim)
{
	char **tokens; /*[];*/
	char *token, *str;
	int i = 0;
	
	/*printf("Step before mem allocation\n");*/
	tokens = malloc(strlen(cmd) * sizeof(char *));
	str = malloc(sizeof (char) * sizeof(cmd));
	strcpy(str, cmd);
	/*printf("After malloc\n");*/
	/*printf("%s",*str);*/

	for (;; i++, str = NULL)
	{
		if (i == 0)
		{
			printf("\tstarting for loop\n");
		}
		token = strtok (str, delim);
		tokens[i] = token;/*strtok (str, delim);*/
		if (token == NULL)
		{
			break;
		}
                printf("arg[%d] -> %s\n",i,tokens[i]);
	}
	free(str);
	return (tokens);
}/*
void loop(void)
{
	char *line;
	char **args;
	size_t linesize = 0;
	char delim = " ";
	pid_t child_pid;
	int status,lstatus = 1;


	while(lstatus)
	{
		printf("#cisfun ");
		getline(&line, &linesize, stdin);
		args = _strtok(line, delim);

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
	                        perror("Error:");
			}
		}
		else
		{
			wait(&status);
			free(line);
			free (args);
		}
	}


		
}*/
int main(int ac, char **av)
{
        char *line;
	/*size_t n;*/
        /*char *args[]= {"",NULL};*/
	char **args;
        size_t linesize = 0;
        char *delim = "  \n";
        pid_t child_pid;
        int status,lstatus = 1;


        while(lstatus)
        {
                printf("#cisfun$ ");
		/*printf("before getline\n");*/
                getline(&line, &linesize, stdin);
		printf("\n\tafter getline\nstarting args\n");
		/*strcpy(cline,line);*/
                args = parse(line, delim);
		/*args[0]=strtok(line,delim);*/
		printf("after args\n");

                child_pid = fork(); 
                if (child_pid == -1)
                {
                        perror("Error:");
                        return (1);
                }
                if (child_pid == 0)
                {
                        if (execve(args[0], args, NULL) == -1)
                        {
                                perror("Error:");
                        }
                }
                else
                {
                        wait(&status);
                        free(line);
                        /*free (args);*/
                }
        }
	return (0);

}
