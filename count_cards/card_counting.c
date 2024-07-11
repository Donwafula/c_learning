#include "cards.h"

/**
 * main - Entry
 * Return: 0 on success
 */
int main(void)
{
	printf("CARDS\n\n");
	char card[3];
	int value = count();

	printf("\n%d\n", value);

	return (0);
}






















/**
 * card_value - Function to evaluate face value of cards
 * Return: 0 on success
 */
int card_value(void)
{
	char n[3];
	int val = 0;

	puts("Enter the card's Letter (e.g. K, Q, J, A)\n             OR");
	puts("Number (e.g. 2, 3, 4, 5, 6, 7, 8, 9, 10)\n");
	scanf("%s", n);

	switch (n[0])
	{
		case 'A':
			val = 11;
			break;
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			val = _atoi(n);
			break;
		default:
		{
			printf("\nLetter or number is invalid\n");
			return (-1);
		}
	}
	printf("\n%d\n", val);
	return (val);
}

/**
 * count - checks the card's value and conts
 * Return: +1 or -1
 */
int count(void)
{
	int val = card_value(), counter = 0;

	if (val > 2 && val < 7)
	{
		counter++;
		puts("Count has gone up");
	}
	else if (val == 10)
	{
		counter--;
		puts("Count has gone down");
	}

	return (counter);
}

/**
 * _atoi - custom atoi(). Function to convert string to integer
 * @n: string to convert
 * Return: resultant integer
 */
int _atoi(char *n)
{
	int index = 0, bre_ak = 0, sign = 1, at_oi = 0;

	while (n[index] != '\0')
	{
		if (n[index] == 45)
			sign *= -1;
		while (isdigit(n[index]))
		{
			at_oi = (at_oi * 10) + (n[index] - 48);
			bre_ak = 1;
			index++;
		}
		if (bre_ak == 1)
			break;
		index++;
	}
	at_oi *= sign;

	return (at_oi);
}
