#include "lists.h"

/**
 * pop_listint - delet head node and return data
 * @head: pointer to head node
 *
 * Return: return data of the first node, return NULL if empty
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t temp;
	
	if (*head == NULL)
		return 0;
	while (*head)
	{
		x = (*head)->n;
		free((*head)->next);
		free(*head);
	}
	return (x);
}
