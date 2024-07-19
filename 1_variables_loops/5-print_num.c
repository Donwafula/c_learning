/*Program prints all single digit nums to base 10, followed by a new line*/

#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
