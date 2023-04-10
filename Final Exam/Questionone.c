#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*head;

struct node* first = NULL;
struct node* second = NULL;
struct node* third = NULL;
struct node* forth = NULL;
struct node* fifth = NULL;

void display(struct node* head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void search(struct node* t, int n){
    struct node* current;
    current = t;
    int i;
    while(current != NULL){
        if(current->data == n){
            printf("Element found");
            break;
        }else{
            current = current->next;
            i--;
        }
    }
    if(i < 0)
        printf("Element not found\n");
}

void bigger(struct node* t, int n){
    struct node* current;
    current = t;
    while(current != NULL){
        if(current->data > n){
            printf("%d ", current->data);
            current = current->next;
        }else{
            current = current->next;
        }
    }
}

void sum(struct node* t, int n){
    struct node* current;
    current = t;
    int sum = 0;
    while(current != NULL){
        if(current->data >= n){
            sum += current->data;
            current = current->next;
        }else{
            current = current->next;
        }
    }
    printf("%d\n", sum);
}

void main(){
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    forth = malloc(sizeof(struct node));
    fifth = malloc(sizeof(struct node));

    first->data = 2;
    second->data = 2;
    third->data = 1;
    forth->data = 9;
    fifth->data = 4;

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

    head = first;

    printf("All nodes:.. \n");
    display(head);

    int n;
    printf("Enter number to search:.. ");
    scanf("%d", &n);
    printf("\nsearch result:\n");
    search(head, n);
    printf("\nnodes greater:");
    bigger(head, n);
    printf("\nSum: ");
    sum(head, n);
}
