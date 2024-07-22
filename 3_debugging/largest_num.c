/*This program prints the largest of 3 integers*/

#include <stdio.h>

int largest_num(int a, int b, int c);
/**
 * main - task
 * Return: 0
 */
int main(void)
{
	int a = 972, b = -98, c = 0, largest;

	largest = largest_num(a, b, c);
	printf("%d is the largest number\n", largest);
	return (0);
}

/**
 * largest_num - finds the largest of three numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */
int largest_num(int a, int b, int c)
{
	int largest;

	if (a > b && (b > c || a > c))
		largest = a;
	else if (b > a && (a > c || b > c))
		largest = b;
	else
		largest = c;
	return (largest);
}
