#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "DoubleLinkedList.h"

int main()
{
    double_list_t* list = create_list();

    double_node_t* a = create_node("a");
    double_node_t* b = create_node("b");
    double_node_t* c = create_node("c");

    // a b c
    list_right_push(list, a);
    list_right_push(list, b);
    list_right_push(list, c);
    
    // Assertions
    assert(a == list->head);
    assert(b == list->tail->prev);
    assert(c == list->tail);
    assert(3 == list->len);

    // empty
    empty_list(list);

    // Assertions
    assert(NULL == list->head);
    assert(NULL == list->tail);
    assert(0 == list->len);

    double_node_t* d = create_node("d");
    double_node_t* e = create_node("e");

    list_left_push(list, d);
    list_left_push(list, e);

    // E D
    assert(e == list->head);
    assert(d == list->tail);

    ConsoleD(list);

    return 0;
}