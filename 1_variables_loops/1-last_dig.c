/*This program will assign a random number to the variable n each time it's*/
/*executed. Complete the source code in order to print the last digit of the*/
/*number stored in the variable n.*/

/*The output of the program should be:*/
/*	The string Last digit of, followed by*/
/*	n, followed by*/
/*	the string is, followed by*/
/*		if the last digit of n is greater than 5:*/
/*			the string and is greater than 5*/
/*		if the last digit of n is 0: the string and is 0*/
/*		if the last digit of n is less than 6 and not 0:*/
/*			the string and is less than 6 and not 0*/
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
	int a;

	a = n % 10;
	printf("Last digit of %d is %d and is ", n, a);
	if (a > 5)
		printf("greater than 5\n");
	else if (a == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
