/*Write a function that checks for uppercase character.*/
/* Prototype: int _isupper(int c);*/
/* Returns 1 if c is uppercase or 0 otherwise*/
/*The standard library provides a similar function: isupper.*/

#include <stdio.h>

int _isupper(int c);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

/**
 * _isupper - task
 * @c: ascii value of the character
 * Return: 1 or 0
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
