#include<stdio.h>

int top = -1, stack[20], i;

void push(int array[], int size){
    for(i=0; i<=size-1; i++){
        if(array[i]%2 != 0){
            top++;
            stack[top] = array[i];
        }
    }
}

void display(int size){
    for(i=top; i>=0; i--){
        printf("%d \n", stack[i]);
    }
    printf("\n");
}

void sum(int size){
    int sum = 0;
    for(i=top; i>=0; i--){
        sum = sum + stack[i];
    }
    printf("%d \n", sum);
}

int main(){
    int e;
    printf("Enter number you want:.. ");
    scanf("%d", &e);

    int array[e];
    printf("Enter the items:..\n");
    for(int i=0; i<e; i++){
        scanf("%d", &array[i]);
    }
    push(array, e);

    printf("the stack you have:.. \n");
    display(e);
    printf("sum:.. ");
    sum(e);

    return 0;
}
