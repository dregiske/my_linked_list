/**
 * This is the header file for the my_linked_list.c file
 * This file declares all the functions written in my_linked_list.c
 */

#ifndef MY_LINKED_LIST_H
#define MY_LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * This is the struct node
 * definition for the my_linked_list.c file
 */
struct node{
    int data;
    struct node *next;
};


    /* Deleting functions */


/**
 * This function deletes a node
 * at the given position
 * 
 * @param head the pointer that points to
 *             the address of the head
 * @param position the node index we want to remove from
 */
int delete_at_position(struct node **head, int position);

/**
 * This function deletes the node
 * with the last delete_at_last_occurence
 * 
 * @param head the pointer that points to
 *             the address of the head
 * @param data the element we want removed
 */
int delete_at_last_occurence(struct node **head, int data);


    /* Inserting functions */


/**
 * This function inserts the element
 * at the front
 * 
 * @param head the pointer that points to
 * the address of the head
 * @param data the element to be inserted
 */
int insert_at_front(struct node **head, int data);

/**
 * This function inserts an element
 * at the given position
 * 
 * @param head the pointer that points to
 * the address of the head
 * @param data the element to be inserted
 * @param position the index of where to insert
 */
int insert_at_position(struct node **head, int data, int position);


    /* Other functions */


/**
 * This function gets the length of
 * the linked list
 * 
 * @param head the pointer to the address
 *             of the head
 */
int length(struct node *head);

/**
 * This function prints the list
 * 
 * @param head pointer to the address
 *             of the head
 */
void print_list(struct node *head);

/**
 * This function frees the list
 * to ensure no memory leaks
 * 
 * @param head pointer to the address
 *             of the head
 */
void free_list(struct node *head);

#endif /* MY_LINKED_LIST_H */