#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void card();
int evaluate();
int _atoi(char *n);


/**
 * main program
 */
int main(){
	//card();
	printf("%i\n", _atoi("My - - - n334 66 -7 umber 434 we win"));
	evaluate();
	return 0;
}

/**
 * Function to print a string 10 times
 */
void card(){
	int c = 10;
	while (c > 0) {
		printf("I must not write code in class %d\n", c);
		c = c - 1;
	}
}

/**
 * Function to evaluate face values
 */
int evaluate(){
	char card_name[3];
	int val = 0;

	puts("Enter the card_name");
	scanf("%2s", card_name);
	if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'Q')
		val = 10;
	else if (card_name[0] == 'A')
		val = 11;
	else
		val = _atoi(card_name);

	printf("The card value is: %i\n", val);
	return 0;
}

/**
 * Custom atoi function
 * iterates through a string
 * if it encounters a '-' character it multiplies sign by -1
 * if it encounters an integer, it records it
 * until the point a non-int character is encountered and exits
 * recorded in multiplied by sign and the product then returned by the function
 */
int _atoi(char *n)
{
	int index = 0, sign = 1, at_oi = 0, bre_ak = 0;

	while (n[index] != '\0')
	{
		if (n[index] == 45)
			sign *= -1;

		while (isdigit(n[index]))
		{
			at_oi = (at_oi * 10) + (n[index] - '0');
			bre_ak = 1;
			index++;
		}
		if (bre_ak == 1)
			break;
		index++;
	}
	at_oi *= sign;
	return at_oi;
}
