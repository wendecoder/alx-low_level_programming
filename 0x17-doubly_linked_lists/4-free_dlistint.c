#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list.
  * @head: ponter to the list.
  *
  * Return: VOID.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pro;

	while (head != NULL)
	{
		pro = head;
		head = head->next;
		free(pro);
	}
}
