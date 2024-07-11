#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int evaluate();
int _atoi(char *n);
int count(int n);

/**
 * main program
 */
int main(){
	int n = 0;
	printf("%i\n", _atoi("My - - - n334 66 -7 umber 434 we win"));
	n = count(n);
	printf("%d\n", n);
	return 0;
}


/**
 * Function to evaluate face values
 */
int evaluate(){
	char card_name[3];
	int val = 0;

	puts("Enter the card_name");
	scanf("%2s", card_name);
	switch (card_name[0])
	{
		case 'K':
		case 'Q':
		case 'j':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		default:
			val = _atoi(card_name);
	}

	printf("The card value is: %i\n", val);
	return (val);
}

int count(int n)
{
	int count = 0;

	n = evaluate();
	if (n > 2 && n < 7){
		count++;
		puts("Count has gone up");
	}
	else{
		count--;
		puts("Count has gone down");
	}

	return (count);
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
