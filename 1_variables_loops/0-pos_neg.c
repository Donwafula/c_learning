/*This program will assign a random number to the variable n each time it's*/
/*executed. Complete the source code in order to print whether the number*/
/*stored in the variable n is positive or negative*/

/*The output of the program should be:*/
/*	The number, followed by*/
/*		if the number is greater than 0: is positive*/
/*		if the number is 0: is zero*/
/*		if the number is less than 0: is negative*/
/*	followed by a new line*/

#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
