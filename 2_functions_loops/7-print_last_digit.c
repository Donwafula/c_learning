/*Write a function that prints the last digit of a number.*/
/*	Prototype: int print_last_digit(int);*/
/*	Returns the value of the last digit*/

#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	putchar((n % 10) + '0');
	return ((n % 10));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}
