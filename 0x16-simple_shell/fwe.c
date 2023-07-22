#include "main.h"


int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
    pid_t child_pid, my_pid;
    int status;
    int i = 0;
   /* for (;i<5;i++)
    {
            child_pid = fork();
            if (child_pid == -1)
            {
                perror("Error:");
                return (1);
            }

            if (child_pid == 0)
            {
                    my_pid = getpid();
                    printf("My pid is %u\n", my_pid);
                    if (execve(argv[0], argv, NULL) == -1)
                    {
                        perror("Error:");
                    }

            }
            else
            {
                    wait(&status);
                  
            }
    }
    */
    while (i < 5)
    {
	    child_pid = fork();
	    if (child_pid == -1)
	    {
	        perror("Error:");
	        return (1);
	    }
	   
	    if (child_pid == 0)
	    {
		    my_pid = getpid();
		    printf("My pid is %u\n", my_pid);
	            if (execve(argv[0], argv, NULL) == -1)
        	    {
                	perror("Error:");
	            }

	    }
	    else
	    {
		    wait(&status);
		    i++;
	    }
    }
    return (0);

}
