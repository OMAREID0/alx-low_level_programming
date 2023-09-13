#include "function_pointers.h"

/**
 * print_name - function that print name
 * @name: name will be printed
 * @*f: pointer to function
 * 
 */
 
void print_name(char *name, void (*f)(char *))
{
    (*f)(name);

}
