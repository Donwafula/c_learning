/*A function that prints the numbers, from 0 to 9, followed by a new line.*/
/* Prototype: void print_numbers(void);*/
/* You can only use _putchar twice in your code*/

#include <stdio.h>

void print_numbers(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers();
	return (0);
}

/**
 * print_numbers - task
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
}
