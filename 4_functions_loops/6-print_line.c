/*Write a function that draws a straight line in the terminal.*/
/* Prototype: void print_line(int n);*/
/* You can only use _putchar function to print*/
/* Where n is the number of times the character _ should be printed*/
/* The line should end with a \n*/
/* If n is 0 or less, the function should only print \n*/

#include <stdio.h>

void print_line(int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}

/**
 * print_line - task
 * @n: number of lines to print
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			putchar('_');
			a++;
		}
	}
	putchar('\n');
}
