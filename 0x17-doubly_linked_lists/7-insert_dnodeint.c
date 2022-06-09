#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts new node at a given position.
  * @h: double pointer to head node of d-list.
  * @idx: position to add new node.
  * @n: data to add to new node.
  *
  * Return: address of new node or NULL
  * on failure.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *thisNode = *h;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (thisNode != NULL)
	{
		if (i == idx)
		{
			new_node->next = thisNode;
			new_node->prev = thisNode->prev;
			thisNode->prev->next = new_node;
			thisNode->prev = new_node;
			return (new_node);
		}
		i++;
		thisNode = thisNode->next;
	}
	/*end*/
	if (i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
