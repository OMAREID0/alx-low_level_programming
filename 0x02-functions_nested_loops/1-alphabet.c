#include "main.h"

/*
 *print_alphapet - use funcation print-alphabet to print it in lower case followed with new line
 *Return: return (0) always
 *
 */


void print_alphabet(void)
{
	char x = 'a' ;
	for(x = 'a';x <= 'z'; x++)
{
		_putchar(x);
	
}
	_putchar('\n');

}
