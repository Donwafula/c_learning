/*Write a function that multiplies two integers.*/
/* Prototype: int mul(int a, int b);*/

#include <stdio.h>

int mul(int a, int b);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}

/**
 * mul - task
 * @a: first num [description]
 * @b: second num
 * Return: product
 */
int mul(int a, int b)
{
	return (a * b);
}
