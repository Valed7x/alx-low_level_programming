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
	unsigned int a = 0;
	listint_t *lok = head;

	while (lok && a < index)
	{
		lok = lok->next;
		a++;
	}

	return (lok ? lok : NULL);
}
