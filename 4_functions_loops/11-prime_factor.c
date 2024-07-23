/* The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.*/
/* Write a program that finds and prints the largest prime factor*/
/*   of the number 612852475143, followed by a new line.*/
/* You are allowed to use the standard library*/
/* Your program will be compiled with this command:*/
/*gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c*/
/*   -o 100-prime_factor -lm*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(long n);

/**
 * main - task
 * Return: 0
 */
int main(void)
{
	long n = 612852475143, factor = 2, largest = 0;

	while (factor <=  n)
	{
		if (n % factor == 0)
		{
			if (is_prime(factor) == true)
				largest = factor;

			n /= factor;
		}
		factor++;
	}
	if (n > 2)
		largest = n;

	printf("%ld\n", largest);
	return (0);
}

/**
 * is_prime - checkes if a number is a prime number
 * @n: number to check
 * Return: true or false
 */
bool is_prime(long n)
{
	int i = 5;

	if (n <= 1)
		return (false);
	if (n <= 3)
		return (true);
	if (n % 2 == 0 || n % 3 == 0)
		return (false);

	while (i * i <= n)
	{
		if (n % i == 0)
			return (false);
		i += 2;
	}
	return (true);
}
