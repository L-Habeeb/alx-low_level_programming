#include "lists.h"

/**
 * add_node - function that add node at the beginning
 * @head: the head node parameter
 * @str: the string that will store in the node
 * Return: the address of the new node or NULL if not allocated
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	newNode->len = count;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
