#include "lists.h"

/**
  * add_dnodeint_end - adds new node at end of doubly linked list.
  * @head: double pointer to list.
  * @n: New node.
  *
  * Return: address to new element or NULL.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
