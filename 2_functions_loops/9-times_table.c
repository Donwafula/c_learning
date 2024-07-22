/*Write a function that prints the 9 times table, starting with 0.*/
/*	Prototype: void times_table(void);*/
/*	Format:*/
/*   julien@ubuntu:~/0x02$ ./9-times_table | cat -e   */
/*   0,  0,  0,  0,  0,  0,  0,  0,  0,  0$   */
/*   0,  1,  2,  3,  4,  5,  6,  7,  8,  9$   */
/*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18$   */
/*   0,  3,  6,  9, 12, 15, 18, 21, 24, 27$   */
/*   0,  4,  8, 12, 16, 20, 24, 28, 32, 36$   */
/*   0,  5, 10, 15, 20, 25, 30, 35, 40, 45$   */
/*   0,  6, 12, 18, 24, 30, 36, 42, 48, 54$   */
/*   0,  7, 14, 21, 28, 35, 42, 49, 56, 63$   */
/*   0,  8, 16, 24, 32, 40, 48, 56, 64, 72$   */
/*   0,  9, 18, 27, 36, 45, 54, 63, 72, 81$   */
/*   julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e   */
/*   0,..0,..0,..0,..0,..0,..0,..0,..0,..0$   */
/*   0,..1,..2,..3,..4,..5,..6,..7,..8,..9$   */
/*   0,..2,..4,..6,..8,.10,.12,.14,.16,.18$   */
/*   0,..3,..6,..9,.12,.15,.18,.21,.24,.27$   */
/*   0,..4,..8,.12,.16,.20,.24,.28,.32,.36$   */
/*   0,..5,.10,.15,.20,.25,.30,.35,.40,.45$   */
/*   0,..6,.12,.18,.24,.30,.36,.42,.48,.54$   */
/*   0,..7,.14,.21,.28,.35,.42,.49,.56,.63$   */
/*   0,..8,.16,.24,.32,.40,.48,.56,.64,.72$   */
/*   0,..9,.18,.27,.36,.45,.54,.63,.72,.81$   */
/*   julien@ubuntu:~/0x02$*/

#include <stdio.h>

/**
 * times_table - prints the nine times table
 */
void times_table(void)
{
	int row = 0, column = 0, mul = 0;

	while (row < 10)
	{
		column = 0;
		while (column < 10)
		{
			mul = row * column;
			if ((mul < 10 && column > 0))
				putchar(' ');
			if (mul > 9)
			{
				putchar ((mul / 10) + '0');
				putchar ((mul % 10) + '0');
			}
			else
				putchar (mul + '0');
			if (column < 9)
			{
				putchar (',');
				putchar (' ');
			}
			if (column == 9)
				putchar('\n');
			column++;
		}
		row++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	times_table();
	return (0);
}
