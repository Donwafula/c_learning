/*Write a function that prints the n times table, starting with 0.*/
/* Prototype: void print_times_table(int n);*/
/* for n more than 15 or less than 0 the function should not print anything*/
/* Format:*/
/* 3 times table: */
/*	0,   0,   0,   0 */
/*	0,   1,   2,   3 */
/*	0,   2,   4,   6 */
/*	0,   3,   6,   9 */

/* 5 times table: */
/*	0,   0,   0,   0,   0,   0 */
/*	0,   1,   2,   3,   4,   5 */
/*	0,   2,   4,   6,   8,  10 */
/*	0,   3,   6,   9,  12,  15 */
/*	0,   4,   8,  12,  16,  20 */
/*	0,   5,  10,  15,  20,  25 */

#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: max value to compute to
 */
void print_times_table(int n)
{
	int row = 0, column = 0, mul = 0;

	if (n > 15 || n < 0)
		return;
	while (row <= n)
	{
		column = 0;
		while (column <= n)
		{
			mul = row * column;
			if ((mul < 10 && column > 0))
				putchar(' ');
			if (mul < 100 && column > 0)
				putchar(' ');
			printf("%d", mul);
			if (column < n)
			{
				putchar (',');
				putchar (' ');
			}
			if (column == n)
				putchar('\n');
			column++;
		}
		row++;
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(3);
	putchar('\n');
	print_times_table(5);
	putchar('\n');
	print_times_table(98);
	putchar('\n');
	print_times_table(12);
	putchar('\n');
	print_times_table(15);
	return (0);
}
