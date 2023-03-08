#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: 0 - If there is no cycle.
 *         1- If there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *snail, *cheta;

	if (list == NULL || list->next == NULL)
		return (0);

	snail = list->next;
	cheta = list->next->next;

	while (snail && cheta && cheta->next)
	{
		if (snail == cheta)
			return (1);

		snail = snail->next;
		cheta = cheta->next->next;
	}

	return (0);
}
