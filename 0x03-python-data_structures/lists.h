#ifndef LISTS_H_INCLUDED
#define LISTS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

int is_palindrome(listint_t **head);
int checkpal(listint_t **start, listint_t *end);

#endif /* LISTS_H */
