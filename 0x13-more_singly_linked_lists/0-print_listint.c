#include "lists.h"

/**
 * print_listint - shows the elements in a linked list
 * @b: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *b)
{
	size_t num = 0;

	while (b)
	{
		printf("%d\n", b->n);
		num++;
		h = h->next;
	}

	return (num);
}
