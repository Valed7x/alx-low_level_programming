#include "lists.h"
#include <stdlib.h>


/**
 * free_listint2 - function that frees a lintints.
 *
 * @head: pointer to pointer to the first node.
 *
 * Return: ..
 */


void free_listint2(listint_t **head)

{
	listint_t *lok;

	if (head == NULL)
		return;

	while (*head)
	{
		lok = (*head)->next;
		free(*head);
		*head = lok;
	}

	*head = NULL;
}
