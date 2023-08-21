#include "main.h"

/*
 *swap_int - swap value of two variablus 
 *@a: first variabule
 *@b: seconed variable
 *
 */

void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
