#include "lists.h"

/**
 * pop_listint - node head of a linked list to be deleted
 * @head: first element in the linked list pointer
 *
 * Return: shows the data inside the elements that was deleted, 
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

