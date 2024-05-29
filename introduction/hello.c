//Documentation section
/**
* Author: Wadoruma
* Date: 29-05-2024
* Description: Simple calculator
*/

/*Here is how you can compile your program correctly:

gcc -o hello hello.c -lncurses*/

//Link section
#include <stdio.h>
#include <ncurses.h>

//Global declaration
int a, b, n;
char sign;
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);


//Main section
int main(void)
{
	initscr(); // Start ncurses mode
	printw("Simple mathematical operations on two integers\n");
	refresh(); // Print it on the real screen
	printw("Enter first number:\n");
	scanw("%d", &a); // Use scanw in ncurses mode
	printw("Enter sign:\n");
	scanw(" %c", &sign);
	printw("Enter second number:\n");
	scanw("%d", &b);

	if (sign == 43)
	{
		n = add(a, b);
		printw("Sum = %d\n", n);
	}
	else if (sign == 45)
	{
		n = sub(a, b);
		printw("Difference = %d\n", n);
	}
	else if (sign == 42)
	{
		n = mul(a, b);
		printw("Product = %d\n", n);
	}
	else if (sign == 47)
	{
		n = div(a, b);
		printw("Division = %d\n", n);
	}
	else
		printw("Error: invalid operation\n");
	refresh(); // Print it on the real screen
	getch(); // Wait for another key press
	endwin(); // End ncurses mode
	return (0);
}

//Subprogram section
/*add: adds 2 integers*/
int add(int, int)
{
	return (a + b);
}
/*sub: subtracts 2 integers*/
int sub(int, int)
{
	return (a - b);
}

/*mul: multiplies 2 integers*/
int mul(int, int)
{
	return (a * b);
}

/*div: divides 2 integers*/
int div(int, int)
{
	return (a / b);
}
