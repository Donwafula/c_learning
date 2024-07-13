#include <stdio.h>

/**
 * main - Program to print this pattern:
 *      * * * * *
 *      * * * *
 *      * * *
 *      * *
 *      *
 * Return: 0
 */
int main(void)
{
	int rows = 0, stars = 0;

	for (rows = 1; rows <= 5; rows++)
	{
		for (stars = 5; stars >= rows; stars--)
			putchar('*');
		putchar('\n');
	}
	return (0);
}
