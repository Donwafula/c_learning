/* Write a function that prints all natural numbers from n to 98,*/
/*followed by a new line.*/
/*	Prototype: void print_to_98(int n);*/
/*	Numbers must be separated by a comma, followed by a space*/
/*	Numbers should be printed in order*/
/*	The first printed number should be the number passed to your function*/
/*	The last printed number should be 98*/
/*  You are allowed to use the standard library*/
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start printing from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else if (n > 98)
	{
		for (n = n; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
	else /*n == 98*/
		printf("%d\n", n);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
