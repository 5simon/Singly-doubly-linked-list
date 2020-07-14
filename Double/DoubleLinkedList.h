#ifndef DoubleLinkedList_H
#define DoubleLinkedList_H

#define GREEN "\033[1;32m"
#define RESET "\033[1m"

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


       /*
        *Return Type: double_list_t*
        *Name: create_list_D
        *Parameters: null
        *Declaration
        */
double_list_t* create_list_D();

        /*
        *Return Type: double_node_t*
        *Name: create_node_D
        *Parameters: void* val
        *Declaration
        */

double_node_t* create_node_D(void* val);

        /*
        *Return Type: void
        *Name: list_right_push_D
        *Parameters: double_list_t* list, double_node_t* node
        *Declaration
        */
void list_right_push_D(double_list_t* list, double_node_t* node);
         /*
        *Return Type: void
        *Name: List_middle_push_D
        *Parameters: single_list_t* list, single_node_t* node
        *Declaration
        */
void List_at_second_push_D(double_list_t* list, double_node_t* node);
        /*
        *Return Type: void
        *Name: list_right_pop_D
        *Parameters: double_list_t* list
        *Declaration
        */
void list_right_pop_D(double_list_t* list);

        /*
        *Return Type: void
        *Name: list_left_push
        *Parameters: double_list_t* list, double_node_t* node
        *Declaration
        */
void list_left_push_D(double_list_t* list, double_node_t* node);

        /*
        *Return Type: void
        *Name: list_left_pop_D
        *Parameters: double_list_t* list
        *Declaration
        */
void list_left_pop_D(double_list_t* list);

        /*
        *Return Type: double_node_t*
        *Name: finde_node_D
        *Parameters: double_list_t* list, void* val
        *Declaration
        */
double_node_t* finde_node_D(double_list_t* list, void* val);

        /*
        *Return Type: double_node_t*
        *Name: node_at_index_D
        *Parameters: double_list_t* list, int index
        *Declaration
        */
double_node_t* node_at_index_D(double_list_t* list, int index);

        /*
        *Return Type: void
        *Name: empty_list_D
        *Parameters: double_list_t* list
        *Declaration
        */
void delete_list_D(double_list_t* list);

        /*
        *Return Type: void
        *Name: remove_node_D
        *Parameters: double_list_t* list, double_node_t* node
        *Declaration
        */
void remove_node_D(double_list_t* list, double_node_t* node);

        /*
        *Return Type: void
        *Name: ConsoleD
        *Parameters: double_list_t* list
        *Declaration
        */
void ConsoleD(double_list_t* list);

#endif