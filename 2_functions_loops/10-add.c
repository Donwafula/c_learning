/*Write a function that adds two integers and returns the result.*/
/*	Prototype: int add(int, int);*/

#include <stdio.h>

/**
 * add - adds two integers
 * @a: first number
 * @b: second number
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
