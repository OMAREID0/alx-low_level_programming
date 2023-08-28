#include "main.h"

/*
 *_memset - function fills memory with a constant byte.
 *@s: array that will fills with constant
 *@b: constant
 *@n: number of slots will fill with constant
 *Return: return pointer to the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		s[i] = b;	
	}
	return(s)
}
