#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - Function that deletes the head nodes.
 *
 * @head: pointer to a pointer to the first nodes.
 *
 * Return: the head node's data (n) 0.
 */


int pop_listint(listint_t **head)

{
	listint_t *lok;

	size_t n;

	if (*head == NULL)
		return (0);

	lok = *head;
	*head = lok->next;
	n = lok->n;
	free(lok);

	return (n);
}
