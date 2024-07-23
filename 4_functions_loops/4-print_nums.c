/*A function that prints the numbers, from 0 to 9, followed by a new line.*/
/* Prototype: void print_most_numbers(void);*/
/* Do not print 2 and 4*/
/* You can only use _putchar twice in your code*/

#include <stdio.h>

void print_most_numbers(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_most_numbers();
	return (0);
}

/**
 * print_most_numbers - task
 */
void print_most_numbers(void)
{
	char a = 48;

	while (a < 58)
	{
		if (a != 50 && a != 52)
			putchar(a);
		a++;
	}
	putchar('\n');
}
