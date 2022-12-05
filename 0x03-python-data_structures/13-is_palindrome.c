#include "lists.h"
/**
 * checkpal - function to check if list is a palindrome
 * @start: start position of list
 * @end: end position of list
 *
 * Return: 1 if list is a palindrome, 0 if not.
 */

int checkpal(listint_t **start, listint_t *end)
{
	if (end == NULL)
		return (1);

	if (checkpal(start, end->next) == 1 && (*start)->n == end->n)
	{
		*start = (*start)->next;
		return (1);
	}

	return (0);
}


/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: list to check
 *
 * Return: 1 if list is a palindrome, 0 if not.
 */

int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (1);

	return (checkpal(head, *head));
}
