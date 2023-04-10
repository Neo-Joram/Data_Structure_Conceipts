#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head;

void print(struct node* prt)
{
    while(prt != NULL)
    {
        printf("%d ", prt->data);
        prt = prt->next;
    }
}

void search(struct node* n)
{
    int x = 42;
    struct node* current = n;
    int i=0;
    while(current != NULL)
    {
        if(current->data == x)
        {
            printf("\nSearched: %d at index: %d", current->data, i);
            break;
        }
        else
        {
            current = current->next;
            i++;
        }
    }
}

int main()
{
    struct node* one = NULL;
    struct node* two = NULL;
    struct node* three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 41;
    one->next = two;

    two->data = 42;
    two->next = three;

    three->data = 43;
    three->next = NULL;

    head = one;
    print(head);

    search(head);
}
