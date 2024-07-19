/*A program that prints all possible combinations of two two-digit numbers.*/
/*The numbers should range from 0 to 99, be separated by a space*/
/*All numbers should be printed with two digits. 1 should be printed as 01*/
/*The combination of numbers must be separated by comma, followed by a space*/
/*The combinations of numbers should be printed in ascending order*/
/*00 01 and 01 00 considered as the same combination of the numbers 0 and 1*/
/*You can only use the putchar function, eight times maximum in your code*/
/*You are not allowed to use any variable of type char*/

#include <stdio.h>

/**
 * main - entry
 * Return: void
 */
int main(void)
{
	int a = 0, b = 0;

	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
