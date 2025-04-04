#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_listint_safe - Prints a listint_t linked list, even with loops
 * @head: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head;    /*Slow pointer (tortoise)*/
    const listint_t *fast = head;    /* Fast pointer (hare)*/
    size_t count = 0;                /* Node counter*/

    /* If list is empty*/
    if (head == NULL)
        return (0);

    /* Traverse list and detect loop*/
    while (slow != NULL)
    {
        /* Print current node*/
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        /* Move slow pointer one step*/
        slow = slow->next;

        /* Move fast pointer two steps (if possible)*/
        if (fast != NULL && fast->next != NULL)
            fast = fast->next->next;
        else
            fast = NULL;  /* Reached end, no loop*/

        /* Loop detected*/
        if (slow != NULL && slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            return (count);
        }

        /* Check for invalid memory access*/
        if (count > 1000000)  /* Arbitrary large limit to detect failure*/
        {
            exit(98);
        }
    }

    return (count);
}
