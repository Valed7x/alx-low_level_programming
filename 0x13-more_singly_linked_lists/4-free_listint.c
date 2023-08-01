#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - function that free a listint_t list.
 *
 * @head: pointer to the head.
 *
 * Return: ..
 */


void free_listint(listint_t *head)

{
	listint_t *lok;

	while (head != NULL)
	{
		lok = head;
		head = head->next;
		free(lok);
	}
}
