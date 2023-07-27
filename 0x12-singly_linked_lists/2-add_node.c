#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node - adds a new node at the beginning.
 *
 * @head: double pointer.
 *
 * @str: string to be added.
 *
 * Return: NULL if it fails
 */


list_t *add_node(list_t **head, const char *str)

{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
