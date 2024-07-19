/*Write a program that prints alphabet in lowercase, followed by a new line.*/
/*You can only use putchar funtion, at most twice*/

#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
