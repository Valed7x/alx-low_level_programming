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
	listint_t *lok = NULL;
	listint_t *lis = NULL;

	while (*head)
	{
		lis = (*head)->lis;
		(*head)->lis = lok;
		lok = *head;
		*head = lis;
	}

	*head = lok;

	return (*head);
}
