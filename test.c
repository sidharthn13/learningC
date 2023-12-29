// program to reverse an array
#include <stdio.h>

void reverse(int *pointer1, int size){
    int *pointer2 = (pointer1+ size -1);
    while(pointer1<pointer2){
        *pointer1 += *pointer2;
        *pointer2 = *pointer1-*pointer2;
        *pointer1 -= *pointer2;
        pointer1+=1;
        pointer2 -= 1;
    }
}

void main(){
    int arr[]= {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    reverse(arr,size);
    for(int i = 0; i< size ; i++){
        printf("%d,", *(arr+i));
    }
}