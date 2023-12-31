#include <stdio.h>

void generateSum(int arr[], int sIndex, int eIndex , int sum){
    if( sIndex>eIndex){
        printf("%d,",sum);
        return;
    }
    generateSum(arr, sIndex+1, eIndex, sum+arr[sIndex]);
    generateSum(arr, sIndex+1, eIndex, sum);
}

void main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);
    generateSum(arr, 0, size-1 , 0);
}   