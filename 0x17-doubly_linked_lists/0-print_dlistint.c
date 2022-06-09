#include "lists.h"
/**
 * print_dlistint - it prints every elements of
 * doubly linked list.
 * @h: is a pointer pointing to head
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pro = h;
	size_t i = 0;

	while (pro != NULL)
	{
		printf("%d\n", pro->n);
		pro = pro->next;
		i++;
	}
	return (i);
}
