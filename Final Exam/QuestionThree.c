#include<stdio.h>
#define MAX 200

char queue[MAX];
int front = -1, rear = -1;

void enqueue(int data, int size){
    if(rear == size-1){
        printf("The queue is full");
    }else if(data == 'a' || data == 'e' || data == 'i' || data == 'o' || data == 'u'){
        front = 0;
        rear++;
        queue[rear] = data;
    }else{
        //printf("Not vowels");
    }
}

void display(){
    for(int i=front; i<=rear; i++){
        printf("%c ", queue[i]);
    }
    printf("\n");
}

void main(){
    int size = sizeof(queue) / sizeof(queue[0]);

    enqueue('n', size);
    enqueue('i', size);
    enqueue('y', size);
    enqueue('o', size);
    enqueue('n', size);
    enqueue('z', size);
    enqueue('i', size);
    enqueue('m', size);
    enqueue('a', size);

    enqueue('y', size);
    enqueue('o', size);
    enqueue('r', size);
    enqueue('a', size);
    enqueue('m', size);
    enqueue('u', size);
    printf("The first and last name vowels:..\n");
    display();
}
