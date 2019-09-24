/*
** EPITECH PROJECT, 2019
** list_other
** File description:
** simple_list
*/

#include "simple_list.h"
#include "stdlib.h"

bool_t list_del_elem_at_front ( list_t *front_ptr)
{
    list_t returne = malloc(sizeof(returne));
    if(front_ptr != NULL) {
        returne = front_ptr->next;
        return(TRUE);
    } else
    return(FALSE);
}

bool_t list_del_elem_at_back ( list_t *front_ptr)
{
    if(front_ptr == NULL)
        return(FALSE);
    if(front_ptr->next == NULL) {
        return(FALSE);
        }

    list_t tmp = (*front_ptr);
    list_t tmp2 = (*front_ptr);

    while(tmp->next != NULL) {
        tmp2 = tmp;
        tmp = tmp->next;
    }
    tmp2->next = NULL;
    return(TRUE);
}

bool_t list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    list_t *prev = malloc(sizeof(prev));
    list_t *next = malloc(sizeof(*next));
    next = front_ptr->next;

    if (position == 0)
    list_add_elem_at_front(front_ptr, front_ptr->value);

    for(int i = 0; i < position; i++) {
        prev = (*front_ptr);
        (*front_ptr) = next;
        next = front_ptr->next;
    }
    prev->next = next;
    return(TRUE);
}
