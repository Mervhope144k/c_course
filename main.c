#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void)
{
	int id = fork();
	
	int n;
	int i;
	if (id == 0)
	{
		n = 1;
	}
	else
	{
		n = 6;
	}
	if (id != 0)
	{
		wait(0);
	}

	for (i = n; i < n + 5; i++)
	{
		printf("%d\n", i);
		/*fflush(stdout);*/
	}
	return (0);
}
