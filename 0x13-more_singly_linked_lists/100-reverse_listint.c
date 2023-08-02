#include "lists.h"


/**
* reverse_listint - reverses a linked lists.
*
* @head: pointers.
*
* Return: pointer to the first nodes.
*/


listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *t = NULL;

	while (*head)
	{
		t = (*head)->t;
		(*head)->t = v;
		v = *head;
		*head = t;
	}

	*head = v;

	return (*head);
}
