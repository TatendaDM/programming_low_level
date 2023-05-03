#include "lists.h"

/**
 * listint_len - returns the # of elements in a linked lists
 * @b: type listint_t to traverse
 *
 * Return: # nodes
 */
size_t listint_len(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		num++;
		b = b->next;
	}

	return (num);
}
