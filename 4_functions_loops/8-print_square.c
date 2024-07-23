/*Write a function that prints a square, followed by a new line.*/
/* Prototype: void print_square(int size);*/
/* You can only use _putchar function to print*/
/* Where size is the size of the square*/
/* If size is 0 or less, the function should print only a new line*/
/* Use the character # to print the square*/

#include <stdio.h>

void print_square(int size);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}

/**
 * print_square - task
 * @size: size of the square
 */
void print_square(int size)
{
	int side_1 = 0, side_2 = 0;

	if (size > 0)
	{
		while (side_1 < size)
		{
			side_2 = 0;
			{
				while (side_2 < size)
				{
					putchar('#');
					side_2++;
				}
			}
			putchar('\n');
			side_1++;
		}
	}
	else
		putchar('\n');
}
