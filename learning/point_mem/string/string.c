#include "_string.h"

/**
 * _strlen - Function to calculate lenght of a C string, excluding '\0'
 * @str: String to check
 * Return: length of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length])
		length++;

	return (length);
}

/**
 * _strcpy - Function to copy a string for a source to a destination
 * @src: source string
 * @dest: destination of the string
 * Return: copied string
 */
char *_strcpy(char *dest, const char *src)
{
	size_t a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * _strncpy - copies at most n characters from the string pointed to by src
 * 						to the array pointed to by dest
 * @dest: destinaltion of string
 * @src: source string
 * @n: number of chars to copy to dest
 * Return: dest
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t a = 0;

	while (src[a] && a < n)
	{
		dest
	}

}
