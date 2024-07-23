/*A function that prints 10 times the numbers, from 0 to 14,*/
/*followed by a new line.*/
/* Prototype: void more_numbers(void);*/
/* You can only use _putchar three times in your code*/

#include <stdio.h>

void more_numbers(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	more_numbers();
	return (0);
}

/**
 * more_numbers - task
 */
void more_numbers(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
				putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			b++;
		}
		putchar('\n');
		a++;
	}

}
