#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#define CHECK(x) ({ \
	if(x == NULL) \
	x = "nil";})
/**
 *  print_dog - Print struct dog
 *  @d equal NULL print nil
 *  @name is NULL print nil
 *
 *  Return: Always return 0 (sucsses)
 */

void print_dog(struct dog *d)
{
	if(d == NULL)
		return;
	printf("Name: %c", CHECK(d.name));
	printf("Age: %f", CHECK(d.age));
	printf("Owner: %c", CHECK(d.owner));

}
