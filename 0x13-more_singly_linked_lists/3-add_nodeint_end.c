#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 * @head: double pointer to head
 * @n: int to put in node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (temp->next);
}
