#include "lists.h"

/**
 * print_list - print number of nodes in list
 * @h: pointer to the first node of the list
 *
 *Return: return number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	char *string;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	ptr = h;
	while (prtr != NULL)
	{
		counter++;
		ptr = ptr->next;
		string = ptr ->str;
		if (str != NULL)
			printf("[%i] %s", counter, string);
		else
		{
			printf("[0] (nil)");
		}
	}
	return (counter);
}
