/**
 * This is the my_linked_list.c file
 * which contains my implementation of a linked list
 */

#include "my_linked_list.h"

int delete_at_position(struct node **head, int position){

    if(position <= 0){
        printf("Invalid position number, must be greater than 0.\n");
        return -1;
    }
    if(*head == NULL){
        printf("Invalid linked list.\n");
        return -1;
    }

    struct node *ptr = *head;
    struct node *prev = NULL;

    if(position == 1){
        *head = ptr->next;
        free(ptr);
        return 1;
    }

    int index = 1;
    while(ptr != NULL && index < position){
        prev = ptr;
        ptr = ptr->next;
        index++;
    }

    if(ptr == NULL){
        printf("Invalid position number, out of range.\n");
        return -1;
    }
    prev->next = ptr->next;
    free(ptr);
    return 1;
}

int delete_at_last_occurence(struct node **head, int data){
    struct node *ptr = *head;
    struct node  *prev = NULL;
    struct node *occurence = NULL;
    struct node *prev_occurence = NULL;

    if(ptr == NULL){
        return 0;
    }

    while(ptr != NULL){
        if(ptr->data == data){
            prev_occurence = prev;
            occurence = ptr;
        }
        prev = ptr;
        ptr = ptr->next;
    }

    if(occurence == NULL){
        return 0;
    }
    else if(occurence == *head){
        *head = occurence->next;
    }
    else{
        prev_occurence->next = occurence->next;
    }
    free(occurence);
    return 1;
}

int insert_at_front(struct node **head, int data){
    struct node *first = malloc(sizeof(struct node));
    if(!first) return -1;

    first->data = data;
    first->next = *head;
    *head = first;
    return 1;
}

int insert_at_position(struct node **head, int data, int position){
    struct node *insert = malloc(sizeof(struct node));
    if(!insert) return -1;
    insert->data = data;

    if(position <= 0){
        printf("Invalid position number, must be greater than 0.\n");
        return -1;
    }
    if(*head == NULL){
        printf("Invalid linked list.\n");
        return -1;
    }

    struct node *ptr = *head;
    struct node *prev = NULL;

    int index = 1;
    while(ptr != NULL && index != position){
        prev = ptr;
        ptr = ptr->next;
        index++;
    }

    if(ptr == NULL){
        return -1;
    }
    if(index == 1){
        insert->next = *head;
        *head = insert;
        free(ptr);
    }

    insert->next = ptr;
    prev->next = insert;

    return 1;
}

int length(struct node *head){
    struct node *ptr = head;
    int count = 0;
    while(ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    return count;
}

void print_list(struct node *head){
    if(head == NULL){
        printf("Linked list is empty.\n");
    }
    else{
        struct node *temp = head;
        printf("head->");
        while(temp != NULL){
            printf("|%d|->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void free_list(struct node *head){
    struct node *temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}