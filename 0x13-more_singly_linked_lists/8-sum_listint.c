#include "lists.h"

/*
 * code will calculates the sum of all the data in a listint_t list
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

