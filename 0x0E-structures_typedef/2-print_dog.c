#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *  print_dog - Print a struct dog
 *  @d: struct dog to print
 *
 */

void print_dog(struct dog *d)
{
	if(d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";i
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);

}
