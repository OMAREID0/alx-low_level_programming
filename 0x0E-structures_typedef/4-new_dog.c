#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function to creat a new dog
 * stroe copy of owner and name
 * @name: name od the dog
 * @age: age stored of the dog
 * @owner: name of the owner
 *
 * Return: return struct dog_t called (new_dog) when success
 * return NULL if the function failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog, copy;
	new_dog = malloc(sizeof(dog_t));
	copy = malloc(sizeof(dog_t));
	if(new_dog == NULL || copy == NULL)
		return NULL;
	*new_dog->name;
	new_dog->age;
	*new_dog->owner;

	new_dog = copy;
	return (new_dog);
}
