/*Write a program that prints all single digit numbers of base 10*/
/*starting from 0, followed by a new line.*/


/*You are not allowed to use any variable of type char*/
/*You can only use the putchar function (every other function (printf, puts,*/
/*etc…) is forbidden). You can only use putchar twice in your code*/

#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
}
