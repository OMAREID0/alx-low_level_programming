#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}