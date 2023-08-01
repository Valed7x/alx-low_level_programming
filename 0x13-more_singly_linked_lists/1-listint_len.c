#include "lists.h"



/**
 *listint_len - returns the number of elements.
 *
 * @h: linked list of type listint_t.
 *
 * Return: number of node.
 */


size_t listint_len(const listint_t *h)

{
	size_t lok = 0;

	while (h != NULL)
	{
		lok++;
		h = h->next;
	}

	return (lok);
}
