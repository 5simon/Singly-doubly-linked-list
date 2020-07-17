#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>

typedef struct double_node
{
    struct double_node* next;
    struct double_node* prev;
    void* val;
} double_node_t;

typedef struct double_list
{
    struct double_node* head;
    struct double_node* tail;
    unsigned int len;
} double_list_t;

double_list_t* create_list_D()
{
    double_list_t* new_list = (double_list_t*) malloc(sizeof(double_list_t));
    if(!new_list)
        return NULL;

    new_list->head = NULL;
    new_list->tail = NULL;
    new_list->len = 0;

    return new_list;
}

double_node_t* create_node_D(void* val)
{
    double_node_t* new_node = (double_node_t*) malloc(sizeof(double_node_t));
    if(!new_node)
        return NULL;

    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->val = val;

    return new_node;
}

void list_right_push_D(double_list_t* list, double_node_t* node)
{
    if(!node || !list)
        return;

    if(list->len > 0)
    {
        node->next = NULL;
        node->prev = list->tail;
        list->tail->next = node;
        list->tail = node;
    }
    else
    {
        node->next = NULL;
        node->prev = NULL;
        list->head = node;
        list->tail = node;
    }

    list->len++;
}

int main()
{      
    clock_t start = clock();

    double_list_t* list = create_list_D();
    double_node_t* node = create_node_D((char*)node->val);
    FILE* fp = fopen("numbers.csv","r");
    if (!fp)
        printf("no file\n");
    
    while(fgets((char*)node->val,999, fp))
    {
      for(int i = 0; i<1000; i++)
        {
            list_right_push_D(list,node);
        }      
    }

    printf("it takes %.2fms to insert 1000 elements in list with double linked list\n", (double)(clock() - start) / (CLOCKS_PER_SEC / 1000));

    fclose(fp);
    return 0;
}