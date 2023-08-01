#include "lists.h"


/**
* sum_listint - sum of all data of nodes.
*
* @head: pointer to nodes.
*
* Return: data of sum.
*/


int sum_listint(listint_t *head)

{
	listint_t *lok;

	size_t q;

	lok = head;
	q = 0;
	while (lok != NULL)
	{
		q += lok->n;
		lok = lok->next;
	}
	return (q);
}
