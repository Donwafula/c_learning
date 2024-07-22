/*Write a function that computes the absolute value of an integer.*/
/*	Prototype: int _abs(int);*/

#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: integer [description]
 * Return: absolute value of int
 */
int _abs(int n)
{
	return ((n > 0) ? (n) : (-n));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
