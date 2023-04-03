#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of a list
 *
 * returns: number of nodes (counter)
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d ", current->n;
		current = current->next;
		counter++;

	}
	return (counter);
}
