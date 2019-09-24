/*
** EPITECH PROJECT, 2019
** list_other
** File description:
** simple_list
*/

#include "simple_list.h"
#include "stdlib.h"

bool_t list_add_elem_at_front (list_t *front_ptr, double elem)
{
    list_t *newelem = front_ptr;
    list_t test = malloc(sizeof(test));

    if (test == NULL)
    return(FALSE);
    test->value = elem;
    test->next = *newelem;
    return(TRUE);
}

bool_t list_add_elem_at_back ( list_t *front_ptr , double elem)
{
    list_t testb = malloc(sizeof(testb));
    testb->value = elem;
    testb->next = NULL;
    if (testb == NULL)
    return(FALSE);
    else {
        list_t temp = *front_ptr;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = NULL;
        return(TRUE);
    }
}

bool_t list_add_elem_at_position (list_t *front_ptr, double elem, unsigned int pos)
{
    list_t tmp = malloc(sizeof(tmp));
    list_t nelem = malloc(sizeof(nelem));
    nelem->value = elem;

    if (pos == 0)
    list_add_elem_at_front(front_ptr, elem);

    if (pos < 0 || pos >= list_get_size(*front_ptr) || list_get_size(*front_ptr) < 2 || !elem)
    return(FALSE);
    for(int i = 0; i < pos - 1; i++) {
        tmp = *front_ptr;
        front_ptr = front_ptr->next;
    }
    nelem->next = (*front_ptr);
    tmp->next = nelem;
    return(TRUE);
}
