#include "lists.h"

/**
 * print_list - print number of nodes in list
 * @h: pointer to the first node of the list
 *
 *Return: return number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0;
	if (h == NULL)
		return (0);
	
	list_t *ptr = malloc(sizeof(list_t));
	
	ptr = h;
	while (prtr != NULL)
	{
		counter++;
		ptr = ptr->next;

		if (str != NULL)
			printf("[%i] %s\n", ptr->len, ptr->str);
		else
		{
			printf("[%u] %s\n", ptr->len, "(nil)" );
		}
	}
	return (counter);
}
