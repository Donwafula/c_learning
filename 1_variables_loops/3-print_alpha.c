/*Write a function that prints alphabets in lowercase, and then in uppercase*/
/*follwed by a new line*/
/*You can only use putchar, at most thrice in your code*/

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
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
