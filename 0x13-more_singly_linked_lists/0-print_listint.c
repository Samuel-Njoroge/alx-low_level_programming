#include "lists.h"


/**
 * print_listint : prints list elements
 * @head : the head of the list
 * Return : the number of nodes.
 */

size_t print_listint(const lisint *head)
{
	size_t nodes = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}
	return (nodes);
}
