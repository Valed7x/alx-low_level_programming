#include "lists.h"



/**
 * print_listint - Prints all the elements listint_t list.
 *
 * @h: Pointer to the head the list.
 *
 * Return: The number  nodes in the list.
 */


size_t print_listint(const listint_t *h)

{
	size_t lok = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
