#include "lists.h"

/**
 * get_nodeint_at_index - reviews the node at an index in a linked list
 * @head: first node in the list
 * @index: index of the node to return
 *
 * Return: NULL, and or pointer with the searched node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
