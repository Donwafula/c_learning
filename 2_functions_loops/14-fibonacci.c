/*Write a program that prints the first 50 Fibonacci numbers,*/
/*starting with 1 and 2, followed by a new line.*/
/* The numbers must be separated by comma, followed by a space*/
/* You are allowed to use the standard library*/

#include <stdio.h>

/**
 * main - task
 * Return: 0
 */
int main(void)
{
	long count = 0, a = 0, swap = 0, fib = 1;

	while (count < 50)
	{
		a = swap;
		swap = fib;
		fib = a + swap;
		printf("%lu", fib);
		if (count < 49)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
