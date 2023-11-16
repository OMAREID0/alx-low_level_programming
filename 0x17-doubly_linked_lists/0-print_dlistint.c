#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of double linked list
 * @h: pointer to the head of linked list
 * 
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int counter = 0;
    if(h == NULL)
    {
        return (counter);
    }

    while (h != NULL)
    {
        printf("%d\n", h->n);
        counter++;
         h = h->next;
    }
    return (counter);
}
