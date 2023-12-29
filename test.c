#include <stdio.h>
void main(){
    int arr[]= {1,2,3,0,10,5,6,7,8,-1};
    int max = arr[0];
    int min = arr[0];
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0 ; i < size ; i++){
        if(*(arr + i) > max ){
            max = *(arr+i);
        }
        if(*(arr+i)<min ){
            min = *(arr+i);
        }
    }
    printf("MAX is : %d\n MIN is : %d\n", max,min );
}