#include "main.h"

/*
 *_strlen - calculate how many chraracter in the input
 *@s: string to evaluate
 *Return: return the length of string
 */

int _strlen(char *s)
{
	int i;
	for (i = 0 ; s[i] != '\0' ; ++i){}
	return(i);
}
