#include <stdio.h>
#include <stdlib.h>

void _string(char *msg);
void skip(char *msg);
void get_string(void);
void cards(void);
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	char *msg = "Don't call me";
	/*_string("My name is Don");*/
	skip(msg);
	/*get_string();*/
	cards();
	return (0);
}

/**
 * _string - function to print string
 * @msg: string to print
 */
void _string(char *msg)
{
	printf("%c\n", *(msg + 4));
	printf("%lu\n", sizeof(msg));
}

/**
 * skip - function will skip first six characters of a message
 * @msg: message
 */
void skip(char *msg)
{
	puts(msg + 6);/*will print from character 7*/
}

/**
 * get_string - fgets practice
 */
void get_string(void)
{
	char food[6];
printf("Enter favorite food: ");
fgets(food, 6, stdin);
printf("Favorite food: %s\n", food);
}

/**
 * cards - function to trace the Q card
 */
void cards(void)
{
	char cards[] = "JQK"; /*j0 q1 k2*/
	char a_card = cards[2]; /*a_card; k*/

	cards[2] = cards[1]; /*j0, q1, q2*/
	cards[1] = cards[0]; /*jo j1 q2*/
	cards[0] = cards[2]; /*q0 j1 q2*/
	cards[2] = cards[1]; /*q0 j1 j2*/
	cards[1] = a_card; /*q0 k1 j2*/
	puts(cards);
}
