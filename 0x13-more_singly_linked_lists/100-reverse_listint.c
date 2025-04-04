#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint -  reverses a listint_t linked list
* @head: double pointer to head of the listint_t linked list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;    /* Previous node pointer*/
    listint_t *next;           /* Next node pointer*/

    while (*head != NULL)      /* Single loop to reverse the list*/
    {
        next = (*head)->next;  /*Store next node*/
        (*head)->next = prev;  /* Reverse the link*/
        prev = *head;          /* Move prev forward*/
        *head = next;          /* Move head forward*/
    }

    *head = prev;              /* Set head to new first node*/
    return (*head);            /*Return pointer to new head*/
}
