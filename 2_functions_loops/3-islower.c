/*Write a function that checks for lowercase character.*/
/*	• Prototype: int _islower(int c);*/
/*	• Returns 1 if c is lowercase or 0 otherwise*/

#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
