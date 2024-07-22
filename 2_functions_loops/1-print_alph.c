/*A function that prints the alphabet, in lowercase, followed by a new line.*/

/*    • Prototype: void print_alphabet(void);*/
/*    • You can only use _putchar twice in your code*/

#include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
