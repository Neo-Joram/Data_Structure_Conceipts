#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX], front=-1, rear=-1;

void enqueue(int data){
    if(rear==MAX-1){
        printf("Queue is full");
    }else{
        front=0;
        rear++;
        queue[rear] = data;
    }
}

void dequeue(){
    if(rear == -1){
        printf("Queue is empty");
    }else{
        front++;
    }
}

void print(){
    for(int i=front; i<=rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}
void main(){
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    print();
    dequeue();
    print();
}
