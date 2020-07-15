#include "SingleLinkedList.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//#include <DoubleLinkedList.h>

int main()
{   
    clock_t start = clock();
    single_list_t* list = create_list_S();

    single_node_t* a = create_node_S("a");
    single_node_t* b = create_node_S("b");
    single_node_t* c = create_node_S("c");

    list_right_push_S(list, a);
    list_right_push_S(list, b);
    list_right_push_S(list, c);
    
    printf("time: %fms\n",(double)(clock() - start) / (CLOCKS_PER_SEC / 1000));
    return 0;
}
