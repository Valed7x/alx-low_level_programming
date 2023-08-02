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
	size_t counter = 0;
	size_t new_n;

	lok = head;
	while (lok)
	{
		printf("[%p] %d\n", (void *)lok, lok->n);
		counter++;
		lok = lok->next;
		lis = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (lok == lis)
			{
				printf("-> [%p] %d\n", (void *)lok, lok->n);
				return (counter);
			}
			lis = lis->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
