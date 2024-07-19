/*Write a program that prints all the numbers of base 16 in lowercase,*/
/*followed by a new line.*/
/*You can only use the putchar function, three times*/

#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 16)
	{
		if (n > 9 && n < 16)
		{
			putchar(c);
			c++;
		}
		else
			putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
