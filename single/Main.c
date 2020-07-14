#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "SingleLinkedList.h"


int main(int argc, char *argv[])
{   //creat a new list
    single_list_t* list = create_list_S();

    //creat new nods 
    single_node_t* a = create_node_S("a");
    single_node_t* b = create_node_S("b");
    single_node_t* c = create_node_S("c");

    // insert new the nods in the list
    list_right_push_S(list, a);
    list_right_push_S(list, b);
    list_right_push_S(list, c);

    // Assertions
    assert(a == list->head);
    assert(b == list->head->next);
    assert(c == list->tail);
    assert(3 == list->len);

    // empty the list from the nodes
    empty_list_S(list);

    // Assertions
    assert(NULL == list->head);
    assert(NULL == list->tail);
    assert(0 == list->len);

    // create new 3 nodes 
    single_node_t* d = create_node_S("d");
    single_node_t* e = create_node_S("e");
    single_node_t* f = create_node_S("f");

    // again instert to the list above 
    list_right_push_S(list, d);
    list_right_push_S(list, e);
    list_right_push_S(list, f);

    // empty the list by remove of single nodes or remove a node from the list
    remove_node_S(list, f);
    
    assert(2 == list->len);
    assert(e == list->tail);
    assert(d == list->head);
    // finde a node by value
    single_node_t* result_find = finde_node_S(list, "e");
    if (result_find != NULL)
    {
        printf(GREEN"the node, it has %s as value  is in the list\n"RESET, (char*)result_find->val);
    }
    else
    {
        printf(GREEN"Element %s is not in the list!\n"RESET, (char*)result_find->val);
    }
    
    //finde a node by index
    int index = 2;
    single_node_t* result_at = node_at_index_S(list, index);
    if (result_at != NULL)
    {
        printf(GREEN"Index %d has the value of %s\n"RESET, index, (char*)result_at->val);
    }
    else
    {
        printf(GREEN"Index %d is out of bounds\n"RESET, index);
    }
    ConsoleS(list);

    return 0;
}