#include<stdio.h>

int main(){
    int arr[] = {3,4,2,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i, j, swap;
    //Bubble sort
    for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
    //Print sorted array
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
}
