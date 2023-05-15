#include <stdio.h>

/**
 * main - entry point of the program, main function
 * Return: 0 if the fuction is successful
 */

int main(void)
{
	int two = 2, three = 3, six = 6;

	int result = (two + three) * six / three;

	printf("I am new to programming but I know how to write arithmetic expressions like this:(%d + %d) * %d / %d\n", two, three, six, three);
	printf("And the result of this expression is: %d\n", result);
	return (0);
}

