/*A program that prints all possible different combinations of two digits.*/
/*Numbers must be separated by ,, followed by a space*/
/*The two digits must be different*/
/*	01 and 10 are considered the same combination of the two digits 0 and 1*/
/*	Print only the smallest combination of two digits*/
/*Numbers should be printed in ascending order, with two digits*/
/*You can only use the putchar function, max five times*/
/*You are not allowed to use any variable of type char*/
#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 100)
	{
		if ((a / 10) < (a % 10))
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			if ((a / 10) != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
