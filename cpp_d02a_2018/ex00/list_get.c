/*
** EPITECH PROJECT, 2019
** list_other
** File description:
** simple_list
*/

#include "simple_list.h"
#include "stdlib.h"

double list_get_elem_at_front ( list_t list)
{
    if (list == NULL)
    return(0);
    else
    return(list->value);
}

double list_get_elem_at_back ( list_t list)
{
    list_t temp = list;
    temp->next = NULL;

    if (list == NULL)
    return(0);
    else
    while(list->next !=NULL) {
        temp = temp->next;
    }
    return(temp->value);
}

double list_get_elem_at_position ( list_t list , unsigned int position)
{
    list_t temp = list;

    if (position == 0)
    list_get_elem_at_front(list);
    else
    for(int i = 0; i < position; i++) {
        temp = temp->next;
    }
    return(temp->value);
}

node_t * list_get_first_node_with_value ( list_t list , double value)
{
    list_t temp = list;
    while(temp != NULL) {
        if(temp->node->value == value)
        return(temp->node->value);
    }
    return(NULL);
}
