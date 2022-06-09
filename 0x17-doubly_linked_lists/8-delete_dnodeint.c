#include "lists.h"
/**
  * dlistint_len - returns number of elements in doubly linked list.
  * @h: ponter to head node of list.
  *
  * Return: number of elements in list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	/* i is counter var */
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
  * delete_nodeint_at_index - deletes node of a doubly linked list
  * at a speified index.
  * @head: pointer to head of d-list.
  * @index: position of node to * 0 ;-)
  *
  * Return: 1 on success, -1 on failure.
  */
int delete_nodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *pro;

	pro = *head;
	if (*head == NULL || index > dlistint_len(pro))
		return (-1);
	if (index == 0 && pro->next)
	{
		pro->next->prev = NULL;
		*head = pro->next;
		free(pro);
		return (1);
	}
	else if (index == 0 && pro)
	{
		free(pro);
		*head = NULL;
		return (1);
	}
	while (idx < index)
	{
		pro = pro->next;
		idx++;
	}
	pro->prev->next = pro->next;
	if (pro->next)
		pro->next->prev = pro->prev;
	free(pro);
	return (1);
}
