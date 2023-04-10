#include<stdio.h>
#define MAX 5

int stack[MAX], top=-1;

void push(int val){
    if(top == MAX-1){
        printf("The stack is full");
    }else{
        top++;
        stack[top] = val;
    }
}

void bubbleSort(){
    for(int i=0; i<=top; i++){
        for(int j=0; j<=top; j++){
            if(stack[j] > stack[j+1]){
                int swap = stack[j];
                stack[j] = stack[j+1];
                stack[j+1] = swap;
            }
        }
    }
    for(int i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
    printf("\n");
}

void pop(){
    if(top == -1){
        printf("Stack is empty");
    }else{
        top--;
    }
}

void print(){
    int i;
    for(i=top; i>=0; i--){
        printf("%d\n", stack[i]);
    }
    printf("\n");
}

int main(){
    push(4);
    push(5);
    push(1);
    printf("Pushing:.. \n");
    print();

    //pop();
    //printf("After popping\n");

    //print();
    printf("Sorted:.. \n");
    bubbleSort();
}
