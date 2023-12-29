#include <stdio.h>
void main(){
    int shift = 2;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i< shift; i++){
        int j = 0;
        while(j< size -1){
            arr[j]+= arr[j+1];
            arr[j+1] = arr[j]- arr[j+1];
            arr[j] -= arr[j+1];
            j++;
        }
    }
    for( int i = 0 ; i< size; i++){
        printf("%d ", *(arr+i));
    }
}