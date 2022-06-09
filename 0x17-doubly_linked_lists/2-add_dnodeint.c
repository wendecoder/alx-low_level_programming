#include "lists.h"
/**
  * add_dnodeint - adds a new node at beginning of a doubly
  * linked list.
  * @head: double pointer to list
  * @n: new node.
  *
  * Return: address of the new element or NULL.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (newNode);
	free(newNode);
}
