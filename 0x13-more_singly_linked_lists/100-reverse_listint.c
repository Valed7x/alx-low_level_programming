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
	listint_t *lis = NULL;

	listint_t *lok = NULL;

	while (*node != NULL)
	{
		lok = (*node)->lok;
		(*node)->lok = lis;
		lisv = *nodenpde;
		*head = lok;
	}
	*head = lis;

	return (*head);
}
