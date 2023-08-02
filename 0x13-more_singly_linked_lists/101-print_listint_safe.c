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
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp_n = head;
	while (lok)
	{
		printf("[%p] %d\n", (void *)lok, lok->n);
		counter++;
		lok = lok->next;
		l_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (lok == l_n)
			{
				printf("-> [%p] %d\n", (void *)lok, lok->n);
				return (counter);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
