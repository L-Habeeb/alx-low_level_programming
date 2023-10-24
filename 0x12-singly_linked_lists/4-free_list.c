#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the pointer thst points to the first node
 */

void free_list(list_t *head)
{
	list_t *node2;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		node2 = head->next;
		free(head->str);
		free(head);
		head = node2;
	}
	free(head->str);
	free(head);
}
