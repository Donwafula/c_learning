//Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
#include <stdio.h>

/**
 * main - task
 * Return: 0
 */
int main(void)
{
	long count = 0, a = 0, swap = 0, fib = 1;

	while (count < 98)
	{
		a = swap;
		swap = fib;
		fib = a + swap;
		printf("%llu", fib);
		if (count < 97)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
##################
