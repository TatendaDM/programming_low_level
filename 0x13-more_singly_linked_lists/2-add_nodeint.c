#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the 1st node in the list
 * @a: insert data in a new node
 *
 * Return: NULL if it fails, pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int a)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->a = a;
	new->next = *head;
	*head = new;

	return (new);
}
