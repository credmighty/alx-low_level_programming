#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer to the head of the listint_t linked list
* @idx: the index of the list where the new node should be added
* @n: element/property n of the node to be added
* Return: address of the new element (SUCCESS), or
* NULL if it failed (FAILURE), or
* NULL if is not possible to add the new node at index @idx
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *ptr, *new_node;
        unsigned int pos = 0;

        if (*head == NULL)
                return (NULL);

        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL)
                return (NULL);

        new_node->n = n;
        new_node->next = NULL;

        if (idx == 0)
        {
                new_node->next = *head;
                *head = new_node;
                return (new_node);
        }

        ptr = *head;

        while (ptr != NULL && pos < idx - 1)
        {
                pos++;
                ptr = ptr->next;
        }
        if (ptr == NULL)
        {
                free(new_node);
                return (NULL);
        }
        new_node->next = ptr->next;
        ptr->next = new_node;

        return (new_node);
}
