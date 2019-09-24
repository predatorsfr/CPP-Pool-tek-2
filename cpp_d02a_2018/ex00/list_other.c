/*
** EPITECH PROJECT, 2019
** list_other
** File description:
** simple_list
*/

#include "simple_list.h"
#include "stdio.h"

unsigned int list_get_size (list_t list)
{
    int i = 0;
    for(;list->next != NULL ; i++)
        list->next = list->next->next;
    return(i);
}

bool_t list_is_empty (list_t list)
{
    if (list == NULL)
        return(TRUE);
    else
        return(FALSE);
}

void list_dump(list_t list)
{
    if (list == NULL)
        return;
    printf("%f\n", list->value);
    return(list_dump(list->next));
}
