/*Write a function that prints an integer.*/
/* Prototype: void print_number(int n);*/
/* You can only use _putchar function to print*/
/* You are not allowed to use long*/
/* You are not allowed to use arrays or pointers*/
/* You are not allowed to hard-code special values*/

#include <stdio.h>

void print_number(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_number(98);
	putchar('\n');
	print_number(402);
	putchar('\n');
	print_number(1024);
	putchar('\n');
	print_number(0);
	putchar('\n');
	print_number(-98);
	putchar('\n');
	return (0);
}

/**
 * print_number - task
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	printf("%d", n % 10);
}
