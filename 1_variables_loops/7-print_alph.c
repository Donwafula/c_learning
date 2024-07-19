/*Write a program that prints the lowercase alphabet in reverse,*/
/*followed by a new line.*/
/*You can only use the putchar function, twice*/

#include <stdio.h>

/**
 * main - entry
 * Return: void
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
