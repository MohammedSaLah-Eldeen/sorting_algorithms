#include "sort.h"
/**
* insertion_sort_list - function that sorts a doubly linked list
*                       of integers in ascending order using the Insertion
*                       sort algorithm
* @list: doubly linked list
* Return: void
*/

void insertion_sort_list(listint_t **list)
{
listint_t *tmp;
listint_t *inserter;
listint_t *t;

if (list == NULL || (*list) == NULL || (*list)->next == NULL)
return;

tmp = (*list)->next;
while (tmp)
{
inserter = tmp;
while (inserter->prev && (inserter->prev)->n > inserter->n)
{
t = inserter->prev;
t->next = inserter->next;
inserter->prev = t->prev;

if (inserter->next)
(inserter->next)->prev = t;
inserter->next = t;

if (t->prev)
(t->prev)->next = inserter;
t->prev = inserter;

if (inserter->prev == NULL)
*list = inserter;

print_list(*list);
}

tmp = tmp->next;
}
}
