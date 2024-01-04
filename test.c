#include <stdio.h>
void generateSubset(int arr[],int sIndex, int eIndex ,int subset[], int count ){
    if(sIndex>eIndex){
        printf("%c",'{');
        for(int i = 0; i< count ;i++){printf("%d,",subset[i]);}
        printf("%c",'}');
        printf("\n");
        return;
    }
    subset[count] = arr[sIndex];
    generateSubset(arr,sIndex+1, eIndex, subset, count+1 );
    generateSubset(arr,sIndex+1, eIndex, subset, count);
}
void main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    int subset[10] =  {0};
    generateSubset(arr, 0, size-1, subset, 0);
}
