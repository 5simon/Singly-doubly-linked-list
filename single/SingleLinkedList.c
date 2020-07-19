#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "SingleLinkedList.h"


//some colors for terminal texts
#define RED "\033[1;31m"  
#define BLUE "\033[1;34m"
#define GREEN "\033[1;32m"
#define RESET "\033[1m"


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
single_node_t* find_prev_node_S(single_list_t* list, single_node_t* node)
{
    if(!list || !node)
        return NULL;

    single_node_t* curr = list->head;
    while(curr->next != node)
    {
        curr = curr->next;
    }
    //ConsoleS(list);
    return curr;
    
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

//define
void List_at_middle_push_S(single_list_t* list, single_node_t* node, int index)
{
    if(!list || !node)
        return;
    
    single_node_t* temp;
    int current_index = 0;


        if(list->len > 0)
        {   
            node->next == NULL;
            temp = list->head;

            for (int i = 0; i < index-2; i++)
            {
                temp = temp->next;
                if(temp == NULL)
                    return;
            }     
            if(temp != NULL)
            {
                node->next = temp->next;
                temp->next = node;
            }    
        } 
        else
        {
            node->next = NULL;
            list->head = node;
            list->tail = node;
        }
        current_index++;
    
   
    list->len++;

}

//define
void list_right_pop_S(single_list_t* list)
{
    if(!list || list->len == 0)
        return;

    single_node_t* node = list->tail;
    single_node_t* prev = find_prev_node_S(list, node);

    if(list->len > 1)
    {
        list->tail = prev;
        list->tail->next = NULL;
    } 
    else
    {
        list->tail = NULL;
        list->head = NULL;
    }

    list->len--;
    //ConsoleS(list);
}

//define
single_node_t* finde_node_S(single_list_t* list, void* val)
{
    if(!list)
        return NULL;

    single_node_t* node = list->head;

    while(node != NULL)
    {
        if (node->val == val)
        {
            return node;
        }

        node = node->next;
    }
    //ConsoleS(list);
    return NULL;
}

//define
single_node_t* node_at_index_S(single_list_t* list, int index)
{
    if(!list || index < 0 || index >= list->len)
        return NULL;

    int current_index = 0;
    single_node_t* node = list->head;

    while(current_index < list->len)
    {
        if (current_index == index)
        {
            return node;
        }

        node = node->next;
        current_index++;
    }
   // ConsoleS(list);
    return NULL;
}

//define
void delete_list_S(single_list_t* list)
{
    if(!list)
        return;

    unsigned int len = list->len;
    single_node_t* next;
    single_node_t* curr = list->head;

    while(len > 0)
    {
        next = curr->next;

        free(curr);
        curr = next;
        len--;
    }

    list->len = 0;
    list->head = NULL;
    list->tail = NULL;
   // ConsoleS(list);
}

//define
void remove_node_S(single_list_t* list, single_node_t* node)
{
    if(!list || !node)
        return;

    single_node_t* prev = find_prev_node_S(list, node);
    prev->next = node->next;

    if(node == list->tail)
    {
        list->tail = prev;
    }

    free(node);
    list->len--;
}

//define
void ConsoleS_char(single_list_t* list)
{
    if(!list)
        return;

    int index = 0;
    single_node_t* node = list->head;
    printf(RED"\nPrinting SingleLinkedList that contains %d elements.\n"RESET, list->len);

    while(node != NULL)
    {
        printf(BLUE"Current node  value: %s, At position %d.\n"RESET, (char*)node->val, index + 1);
        node = node->next;
        index++;
    }
}

void ConsoleS_int(single_list_t* list)
{
    if(!list)
        return;

    int index = 0;
    single_node_t* node = list->head;
    printf(RED"\nPrinting SingleLinkedList that contains %d elements.\n"RESET, list->len);

    while(node != NULL)
    {
        printf(BLUE"Current node  value: %d, At position %d.\n"RESET, (int*)node->val, index + 1);
        node = node->next;
        index++;
    }
}