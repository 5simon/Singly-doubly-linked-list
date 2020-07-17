#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>

typedef struct single_node
{
    struct single_node* next;
    void* val;
} single_node_t;

typedef struct single_list
{
    struct single_node* head;
    struct single_node* tail;
    unsigned int len;
} single_list_t;



//define
single_list_t* create_list_S()
{
    single_list_t* new_list = (single_list_t*) malloc(sizeof(single_list_t));
    //checking if list contains a elements(node)
    if(!new_list)
        return NULL; 
    
    new_list->head = NULL;
    new_list->tail = NULL;
    new_list->len = 0;

    return new_list;
}

//define
single_node_t* create_node_S(void* val)
{
    single_node_t* new_node = (single_node_t*) malloc(sizeof(single_node_t));
    if(!new_node)
        return NULL;

    new_node->next = NULL;
    new_node->val = val;

    return new_node;

}
//define
void list_right_push_S(single_list_t* list, single_node_t* node)
{
    if(!node || !list)
        return;

    if(list->len > 0)
    {
        node->next = NULL;
        list->tail->next = node;
        list->tail = node;
    }
    else
    {
        node->next = NULL;
        list->head = node;
        list->tail = node;
    }

    list->len++;

    //ConsoleS(list);
}


int main()
{      
    clock_t start = clock();

    single_list_t* list = create_list_S();
    single_node_t* node = create_node_S((char*)node->val);
    FILE* fp = fopen("numbers.csv","r");
    if (!fp)
        printf("no file\n");
    
    while(fgets((char*)node->val,999, fp))
    {
      for(int i = 0; i<1000; i++)
        {
            list_right_push_S(list,node);
        }      
    }

    printf("it takes %.2fms to insert 1000 elements in list with single linked list\n", (double)(clock() - start) / (CLOCKS_PER_SEC / 1000));

    fclose(fp);
    return 0;
}