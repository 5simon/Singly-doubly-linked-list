#ifndef DoubleLinkedList_H
#define DoubleLinkedList_H

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
        *Name: create_list
        *Parameters: null
        *Declaration
        */
double_list_t* create_list();

        /*
        *Return Type: double_node_t*
        *Name: create_node
        *Parameters: void* val
        *Declaration
        */

double_node_t* create_node(void* val);

        /*
        *Return Type: void
        *Name: list_right_push
        *Parameters: double_list_t* list, double_node_t* node
        *Declaration
        */
void list_right_push(double_list_t* list, double_node_t* node);
       
        /*
        *Return Type: void
        *Name: list_right_pop
        *Parameters: double_list_t* list
        *Declaration
        */
void list_right_pop(double_list_t* list);

        /*
        *Return Type: void
        *Name: list_left_push
        *Parameters: double_list_t* list, double_node_t* node
        *Declaration
        */
void list_left_push(double_list_t* list, double_node_t* node);

        /*
        *Return Type: void
        *Name: list_left_pop
        *Parameters: double_list_t* list
        *Declaration
        */
void list_left_pop(double_list_t* list);

        /*
        *Return Type: double_node_t*
        *Name: finde_node
        *Parameters: double_list_t* list, void* val
        *Declaration
        */
double_node_t* finde_node(double_list_t* list, void* val);

        /*
        *Return Type: double_node_t*
        *Name: node_at_index
        *Parameters: double_list_t* list, int index
        *Declaration
        */
double_node_t* node_at_index(double_list_t* list, int index);

        /*
        *Return Type: void
        *Name: empty_list
        *Parameters: double_list_t* list
        *Declaration
        */
void empty_list(double_list_t* list);

        /*
        *Return Type: void
        *Name: remove_node
        *Parameters: double_list_t* list, double_node_t* node
        *Declaration
        */
void remove_node(double_list_t* list, double_node_t* node);

        /*
        *Return Type: void
        *Name: ConsoleD
        *Parameters: double_list_t* list
        *Declaration
        */
void ConsoleD(double_list_t* list);

#endif