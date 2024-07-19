/*Write a program that prints alphabet in lowercase, followed by a new line.*/
/*Print all the letters except q and e*/
/*You can only use the putchar function twice*/

#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
