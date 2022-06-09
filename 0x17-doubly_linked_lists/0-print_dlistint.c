#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list = it prints every elements of
 * the linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pro;
	size_t i = 0;

	pro = h;
	while (pro != NULL)
	{
		printf("%d\n", pro->n);
		pro = pro->next;
		i++;
	}
	return (i);
}
