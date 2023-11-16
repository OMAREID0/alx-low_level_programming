#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer for the first node
 * @n: integer to assign it to a node
 * 
 * Return: Return pointer to new node if success,
 * return NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{  
    dlistint_t *new;
    dlistint_t *h;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    h = *head;
    new->n = n;
    new->prev = NULL;

    if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
    new->next = h;
    if (h != NULL)
        h->prev = new;

    *head = new;
    return (new);
}