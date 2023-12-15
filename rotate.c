#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp, *new_head;

	if (*head == NULL || (*head)->next == NULL)
		return;

	tmp = *head;
	new_head = (*head)->next;
	new_head->prev = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;

	*head = new_head;
}

