#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list
 * @head: node head
 * @str: the string to duplicate
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *node2;
	unsigned int i, count = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	newNode->len = count;
	newNode->next = NULL;
	node2 = *head;

	if (node2 == NULL)
		*head = newNode;
	else
	{
		while (node2->next != NULL)
			node2 = node2->next;
		node2->next = newNode;
	}
	return (*head);
}
