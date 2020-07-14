#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "DoubleLinkedList.h"

int main()
{
    //create list
    double_list_t* list = create_list_D();
    double_list_t* number = create_list_D();
    
    // create nodes
    double_node_t* a = create_node_D("a");
    double_node_t* b = create_node_D("b");
    double_node_t* c = create_node_D("c");


    double_node_t* two = create_node_D("2"); 
    double_node_t* one = create_node_D("1");
    double_node_t* three = create_node_D("3");
    //insert the nodes to the list
    list_right_push_D(list, a);
    list_right_push_D(list, b);
    list_right_push_D(list, c);

    list_right_push_D(number, one);
    list_right_push_D(number, two);
    List_at_second_push_D(number, three);
    ConsoleD(number);
    // Assertions
    assert(a == list->head);
    assert(b == list->tail->prev);
    assert(c == list->tail);
    assert(3 == list->len);

    ConsoleD(list);
    // empty the list
    delete_list_D(list);

    // Assertions
    assert(NULL == list->head);
    assert(NULL == list->tail);
    assert(0 == list->len);

    //create new nodes
    double_node_t* d = create_node_D("d");
    double_node_t* e = create_node_D("e");
    double_node_t* f = create_node_D("f");

    //insert the new nodes from left
    list_left_push_D(list, d);
    list_left_push_D(list, e);
    list_left_push_D(list, f);

    //Assertion
    assert(f == list->head);
    assert(e = list->head->next);
    assert(d == list->tail);

    //finde a node by value
    double_node_t* result_find = finde_node_D(list,"f");
    if(result_find != NULL)
    {   
        printf(GREEN"the node, it has (%s) as value  is in the list\n"RESET,(char*)result_find->val);
    }
    else
    {
        printf(GREEN"ther is no node contain a (%s)\n"RESET,(char*)result_find->val);
    }
    
    //finde a node by index
    int index = 4;
    double_node_t* result_at = node_at_index_D(list,index);
    if(result_at != NULL)
    {

        printf(GREEN"at the index (%d) we have a node contain this value(%s)"RESET,index,(char*)result_at->val);

    }
    else
    {
        printf(GREEN"at this index (%d) we have not node"RESET,index);
    }

    
    //print it  
    ConsoleD(list);

    return 0;
}