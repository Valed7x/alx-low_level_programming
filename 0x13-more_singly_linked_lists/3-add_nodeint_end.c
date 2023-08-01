#include "lists.h"



/**
 * add_nodeint_end - adds a node at the linked list.
 *
 * @head: pointer to the first element in the list.
 *
 * @n: data to insert in the new element.
 *
 * Return: pointer to the new node.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *lok = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (lok->next)
		lok = lok->next;

	lok->next = node;

	return (node);
}
