#include "lists.h"

/**
  * sum_dlistint - returns sum of all data in a doubly linked list.
  * @head: pointer to head of d-list.
  *
  * Return: SUM or ) if list is empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *pro;

	if (head == NULL)
		return (0);

	pro = head;
	while (pro != NULL)
	{
		sum += pro->n;
		pro = pro->next;
	}
	return (sum);
}
