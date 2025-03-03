/**
 * Andre Giske
 * andre.giske@yahoo.com
 * 03/03/2025
 * 
 * This is the main.c file which contains the test cases
 * for my linked list implementation
 */
#include "my_linked_list.h"

int main(){
    // allocate memory for linked list
    struct node *head = NULL;
    struct node *first = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));
    struct node *fifth = malloc(sizeof(struct node));
    struct node *sixth = malloc(sizeof(struct node));
    struct node *seventh = malloc(sizeof(struct node));
    struct node *eigth = malloc(sizeof(struct node));
    struct node *nineth = malloc(sizeof(struct node));
    struct node *tenth = malloc(sizeof(struct node));
    struct node *eleventh = malloc(sizeof(struct node));

    // setup linked list
    head = first;
    first->data = 5; first->next = second;
    second->data = 10; second->next = third;
    third->data = 5; third->next = fourth;
    fourth->data = 20; fourth->next = fifth;
    fifth->data = 30; fifth->next = sixth;
    sixth->data = 40; sixth->next = seventh;
    seventh->data = 50; seventh->next = eigth;
    eigth->data = 60; eigth->next = nineth;
    nineth->data = 70; nineth->next = tenth;
    tenth->data = 80; tenth->next = eleventh;
    eleventh->data = 90; eleventh->next = NULL;

    printf("Initial linked list:\n");
    print_list(head);
    printf("Length is: %d.\n", length(head));

    printf("After calling delete_at_position(&head, 4)\n");
    delete_at_position(&head, 4);
    print_list(head);
    printf("Length is: %d.\n", length(head));

    printf("After calling delete_at_last_occurence(&head, 5)\n");
    delete_at_last_occurence(&head, 5);
    print_list(head);
    printf("Length is: %d.\n", length(head));

    printf("After calling insert_at_front(&head, 10)\n");
    insert_at_front(&head, 10);
    print_list(head);
    printf("Length is: %d.\n", length(head));

    printf("After calling insert_at_position(&head, 20, 2)\n");
    insert_at_position(&head, 20, 2);
    print_list(head);
    printf("Length is: %d.\n", length(head));

    free_list(head); // free the list for no memory leaks

    return 0;
}