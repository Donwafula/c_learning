/*Write a function that checks for a digit (0 through 9).*/
/* Prototype: int _isdigit(int c);*/
/* Returns 1 if c is a digit or 0 otherwise*/
/* The standard library provides a similar function: isdigit.*/

#include <stdio.h>

int _isdigit(int c);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}

/**
 * _isdigit - task
 * @c: character
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return (c > 47 && c < 58);
}
