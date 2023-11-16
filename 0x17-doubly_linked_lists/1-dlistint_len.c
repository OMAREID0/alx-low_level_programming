#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements in a linked list
 * @h: pointer to the head
 * 
 * Return : return number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    int counter = 0;

    if (h == NULL)
    {
        return (counter);
    }
    while (h != NULL)
    {
        counter++;
        h = h->next;
    }
    return (counter);
}