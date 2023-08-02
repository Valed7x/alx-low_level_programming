#include "lists.h"


/**
 * free_listint_safe - linked list.
 *
 * @h: pointer the first nod the linked listes.
 *
 * Return: number of elements.
 */


size_t free_listint_safe(listint_t **h)

{
	size_t n = 0;
	int lok;
	listint_t *lis;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		lok = *h - (*h)->next;
		if (lok > 0)
		{
			lis = (*h)->next;
			free(*h);
			*h = lis;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
			break;
		}
	}

	*h = NULL;

	return (n);
}
