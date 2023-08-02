#include "lists.h"


/**
* delete_nodeint_at_index - delete node index.
*
* @head: pointer to the pointer of nodes.
*
* @index: index.
*
* Return: 1 succeeded -1 failed.
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *lok;

	listint_t *lis;

	unsigned int j = 0;

	if (head == NULL)
	return (-1);
	if (*head == NULL)
	return (-1);

	/*init*/

	lok = *head;
	lis = NULL;
	while (lok != NULL && j < index)

	{

	lis = lok;
	lok = lok->next;
	j++;

	}

	if (lok == NULL)
	return (-1);
	if (lis == NULL)

	{

	*head = lok->next;

	}

	else

	{

	lis->next = lok->next;

	}
	free(lok);

	return (1);
}
