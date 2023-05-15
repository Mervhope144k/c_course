#include <stdio.h>
#include <limits.h>

int main(void)
{
	short unsigned int var1 = 0;

	short unsigned int var2 = USHRT_MAX;

	printf("range of short unsigned integer is from: %u to %u", var1, var2);
	printf("\n");
	return (0);
}

