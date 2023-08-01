#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - Function that deletes the nodes.
 *
 * @head: pointer to a pointer to first nodes.
 *
 * Return: 0.
 */


int pop_listint(listint_t **head)

{
	listint_t *lok;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	lok = (*head)->next;
	free(*head);
	*head = lok;

	return (lok);
}
