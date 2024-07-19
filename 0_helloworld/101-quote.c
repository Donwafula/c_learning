/*Write a C program that prints exactly:*/
/*and that piece of art is useful" - Dora Korpar, 2015-10-19*/
/*followed by a new line, to the standard error.*/

/*You are not allowed to use any functions*/
/*listed in the NAME section of the man (3) printf or man (3) puts*/
/*Your program should return 1*/

#include <unistd.h>
#include <string.h>

/**
 * main - entry
 * Return: 1
 */
int main(void)
{
	char c[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, c, strlen(c));
	return (1);
}
