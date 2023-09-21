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
	
	while (h->next != NULL)
	{
		counter++;
		h = h->next;

		if (str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
		{
			printf("[%u] %s\n", h->len, "(nil)" );
		}
	}
	return (counter);
}
