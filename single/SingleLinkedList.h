
#ifndef SingleLinkedList_H
#define SingleLinkedList_H

#define GREEN "\033[1;32m"
#define RESET "\033[1m"

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

        /*
        *Return Type: single_list_t*
        *Name: create_list_S
        *Parameters: null
        *Declaration
        */
single_list_t* create_list_S();

        /*
        *Return Type: single_node_t*
        *Name: create_node_S
        *Parameters: void* val
        *Declaration
        */
single_node_t* create_node_S(void* val);

        /*
        *Return Type: single_node_t*
        *Name: find_prev_node_S
        *Parameters: single_list_t* list, single_node_t* node
        *Declaration
        */
single_node_t* find_prev_node_S(single_list_t* list, single_node_t* node);
        
        /*
        *Return Type: void
        *Name: list_right_push_S
        *Parameters: single_list_t* list, single_node_t* node
        *Declaration
        */
void list_right_push_S(single_list_t* list, single_node_t* node);
   
        /*
        *Return Type: void
        *Name: List_at_middle_push_S
        *Parameters: single_list_t* list, single_node_t* node
        *Declaration
        */
void List_at_middle_push_S(single_list_t* list, single_node_t* node, int index);
        /*
        *Return Type: void
        *Name: list_right_pop_S
        *Parameters: single_list_t* list
        *Declaration
        */

void list_right_pop_S(single_list_t* list);

        /*
        *Return Type: single_node_t*
        *Name: finde_node_S
        *Parameters: single_list_t* list, void* val
        *Declaration
        */
single_node_t* finde_node_S(single_list_t* list, void* val);

        /*
        *Return Type: single_node_t*
        *Name: node_at_index_S
        *Parameters: single_list_t* list, int index
        *Declaration
        */
single_node_t* node_at_index_S(single_list_t* list, int index);

        /*
        *Return Type: void
        *Name: empty_list_S
        *Parameters: single_list_t* list
        *Declaration
        */
void delete_list_S(single_list_t* list);

        /*
        *Return Type: void
        *Name: remove_node_S
        *Parameters: single_list_t* list, single_node_t* node
        *Declaration
        */
void remove_node_S(single_list_t* list, single_node_t* node);

        /*
        *Return Type: void
        *Name: Console_S
        *Parameters: single_list_t* list)
        *Declaration
        */
void ConsoleS_char(single_list_t* list);
void ConsoleS_int(single_list_t* list);

#endif