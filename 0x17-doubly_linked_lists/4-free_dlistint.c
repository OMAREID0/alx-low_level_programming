#include "lists.h"

/**
 * 
 *  
 * 
 * 
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *h;

    if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

    while((h = head) != NULL)
    {
        free(h);
        head = head->next;
    }
}