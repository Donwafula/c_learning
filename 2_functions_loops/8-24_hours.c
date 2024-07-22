/*Write a function that prints every minute of the day of Jack Bauer,*/
/*starting from 00:00 to 23:59.*/
/*	Prototype: void jack_bauer(void);*/

#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int minutes = 0, hours = 0;

	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			putchar((hours / 10) + '0');
			putchar((hours % 10) + '0');
			putchar(':');
			putchar((minutes / 10) + '0');
			putchar((minutes % 10) + '0');
			/*if (minutes != 23 && hours !=59)*/
				putchar('\n');
			minutes++;
		}
		hours++;
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	jack_bauer();
	return (0);
}
