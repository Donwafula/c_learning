#ifndef _STRING_H
#define _STRING_H
/*Functions to mimic the standard string.h C library*/
/*strcpy, strncpy, strcat, strncat, strlen, strcmp, strncmp, strchr, strrchr*/
/*strstr, strtok, strxfrm, strspn, strcspn, strpbrk*/
/*memset, memcpy, memmove, memcmp, memchr*/
/*strdup, strndup*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t _strlen(const char *str);
char *_strcpy(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, size_t n);


#endif /*_STRING_H*/
