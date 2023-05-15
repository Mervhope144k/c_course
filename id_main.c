#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int __attribute__((__unused__))argc, char __attribute__((__unused__))*argv[])
{
	int id = fork();

	int res;

	if (id == 0)
	{
		sleep(1);
	}
	printf("Process ID: %d Parent ID: %d\n", getpid(),getppid());

	res = wait(NULL);

	if (res == -1)
	{
		printf("No children to wait for\n");
	}
	else
	{
		printf("%d finished the process of execution\n");
	}
	return (0);
}
