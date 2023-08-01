#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - locate a given nodes.
 *
 * @head: A pointer to the head.
 *
 * @index: the index of the node ot locate.
 *
 * Return: if the node does not exist - NULL. Otherwise, the located nodes.
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
