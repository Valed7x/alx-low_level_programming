#include "lists.h"


/**
 * print_listint_safe - function that prints a linked a loop safely.
 *
 * @head: pointer to 1st nodes of the linked lists.
 *
 * Return: new node.
 */


size_t print_listint_safe(const listint_t *head)

{
	const listint_t *lok = NULL;
	const listint_t *lis = NULL;
	size_t q = 0;
	size_t new;

	lok = head;
	while (lok)
	{
		printf("[%p] %d\n", (void *)lok, lok->n);
		node++;
		lok = lok->next;
		lis = head;
		new = 0;
		while (new < node)
		{
			if (lok == lis)
			{
				printf("-> [%p] %d\n", (void *)lok, lok->n);
				return (node);
			}
			lis = lis->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (node);
}
