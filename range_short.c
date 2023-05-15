#include <stdio.h>
#include <limits.h>

int main(void)
{
	short int var1 = SHRT_MIN;
	short int var2 = SHRT_MAX;

	printf("range of short signed integer is from: %d to %d", var1, var2);
	printf("\n");
	return (0);
}
