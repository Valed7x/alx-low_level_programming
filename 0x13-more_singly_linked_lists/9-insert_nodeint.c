#include "lists.h"


/**
* insert_nodeint_at_index - Inserts a new nodes.
*
* @head: A pointer to the address of the head of the listint_t list.
*
* @idx: index.
*
* @n: content of new node to insert.
*
* Return: If the function fails - NULL.
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *lok, *lis;
	unsigned int j = 0;

lis = malloc(sizeof(listint_t));
/*check if malloc failed*/
if (lis == NULL)
	return (NULL);
lis->n = n;
if (*head == NULL)
{
	if (idx > 0)
	{
		free(lis);
		return (NULL);
	}
	else
		*head = lis;

}
else if (idx == 0)
{
	lis->next = *head;
	*head = lis;
}
else
{       lok = *head;
	while (lok != NULL && j < idx - 1)
	{
		lok = lok->next;
		j++;
	}
	if (lok == NULL)
	{
		free(lis);
		return (NULL);
	}
	lis->next = lok->next;
	lok->next = lis;
}
	return (lis);
}
