#include "lists.h"

/**
 * add_nodeint - add new node to th beginning of the list
 * @head: pointer of pointer pointing to head of list
 * @n: intger add to the node
 *
 *Return: return pointer to new node, if it failed return (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = (*head);
	new->n = n;
	(*head) = new;

	return ((*head));
}
