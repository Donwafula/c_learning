/*Write a function that checks for alphabetic character.*/
/* Prototype: int _isalpha(int c);*/
/* Returns 1 if c is a letter, lowercase or uppercase or 0 otherwise*/

#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
