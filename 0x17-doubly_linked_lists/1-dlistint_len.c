#include "lists.h"
/**
 * dlistint_len - prints the lenght of the doubly link
 * @h: pointer that points to head
 *
 * Return: returns number of elements in doubly link
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *pro = h;
	size_t times = 0;

	while (pro != NULL)
	{
		pro = pro->next;
		times++;
	}
	return (times);
}
