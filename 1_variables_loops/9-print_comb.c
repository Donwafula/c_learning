/*Write a program that prints all possible combinations of single-digit nums.*/
/*Numbers must be separated by ,, followed by a space, in ascending order*/
/*You can only use the putchar, maximum 4 times*/
/*You are not allowed to use any variable of type char*/

#include <stdio.h>

/**
 * main - entry
 * Return: void
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
