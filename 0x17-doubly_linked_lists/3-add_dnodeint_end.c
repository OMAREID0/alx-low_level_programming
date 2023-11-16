#include "lists.h"

/**
 * 
 * 
 * 
 * 
 * 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *h;

    new = malloc(sizeof(dlistint_t));
    if(new == NULL)
        return (NULL);

    new->next = NULL;
    new->n = n;
    h = *head;

    if (h == NULL)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }

    while (h->next != NULL)
    {
        h = h->next;
    }

    h->next = new;
    new->prev = h;
    return (new);
}