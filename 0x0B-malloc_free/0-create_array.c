#include "main.h"
#include <stdlib.h>

/*
 * create_array - function to creat an array of char with knowen size 
 *and replace the empate spaces with char c
 *@size - show how many unit will need to allocate.
 *@c -the char that will be overwritten
 *Return: return (NULL) if there is no free space and return array if it successful done
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;
	s =(char *) malloc(size * sizeof(char));
	if ( size == NULL)
		return 0;
	for(i = 0; i < size; ++i)
	{
		s[i] == c;
	}
	s[i] = NULL;
	return s;
}
