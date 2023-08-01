#include "lists.h"



/**
 * add_nodeint - adds a new node at the beginning list.
 *
 * @head: pointer to the first node in the list.
 *
 * @n: data to insert in that new node.
 *
 * Return: pointer to the node
 */


listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *lok;

	lok = malloc(sizeof(listint_t));
	if (!lok)
		return (NULL);

	lok->n = n;
	lok->next = *head;
	*head = lok;

	return (lok);
}
