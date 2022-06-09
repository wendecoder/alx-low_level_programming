#include "lists.h"
/**
  * get_dnodeint_at_index - returns nth node of a doubly linked list.
  * @head: pointer to head node.
  * @index: index of node to be returned.
  *
  * Return: address of required node otherwise, NULL>
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *pro;

	if (head == NULL)
		return (NULL);

	pro = head;
	while (i < index)
	{
		pro = pro->next;
		i++;
		if (pro == NULL)
			return (NULL);
	}
	return (pro);
}
