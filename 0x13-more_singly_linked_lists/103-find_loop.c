#include "lists.h"



/**
 * find_listint_loop - finds the loop.
 *
 * @head: list to search for linked.
 *
 * Return: address of the node.
 */


listint_t *find_listint_loop(listint_t *head)

{
	listint_t *lok = head;
	listint_t *lis = head;

	if (!head)
		return (NULL);

	while (lok && lis && lis->next)
	{
		lis = lis->next->next;
		lok = lok->next;
		if (lis == lok)
		{
			lok = head;
			while (lok != lis)
			{
				lok = lok->next;
				lis = lis->next;
			}
			return (lis);
		}
	}

	return (NULL);
}
