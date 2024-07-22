/*function that prints 10 times the alphabet, in lowercase,*/
/*followed by a new line.*/
/*    • Prototype: void print_alphabet_x10(void);*/
/*    • You can only use _putchar twice in your code*/

#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 0;

	while (n < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		n++;
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
