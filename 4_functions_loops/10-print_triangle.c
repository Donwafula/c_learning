/*Write a function that prints a triangle, followed by a new line.*/
/* Prototype: void print_triangle(int size);*/
/* You can only use _putchar function to print*/
/* Where size is the size of the triangle*/
/* If size is 0 or less, the function should print only a new line*/
/* Use the character # to print the triangle*/

#include <stdio.h>

void print_triangle(int size);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}

/**
 * print_triangle - task
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int base = 1, height = 1;

	if (size > 0)
	{
		while (height <= size)
		{
			base = 1;
			while (base <= size)
			{
				if (base <= (size - height))
				{
					putchar(' ');
				}
				else
					putchar('#');
				base++;
			}
			putchar('\n');
			height++;
		}
	}
	else
		putchar('\n');
}
