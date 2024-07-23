/*Write a function that draws a diagonal line on the terminal.*/
/* Prototype: void print_diagonal(int n);*/
/* You can only use _putchar function to print*/
/* Where n is the number of times the character \ should be printed*/
/* The diagonal should end with a \n*/
/* If n is 0 or less, the function should only print a \n*/

#include <stdio.h>

void print_diagonal(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}

/**
 * print_diagonal - task
 * @n: number of times the diagonal should be printed
 */
void print_diagonal(int n)
{
	int a = 0, b = 0;

	if (n < 1)
		putchar('\n');
	else
	{
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				putchar(' ');
				b++;
			}
			putchar('\\');
			putchar('\n');
			a++;
		}
	}
}
