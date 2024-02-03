// this program creates a hashmap to store digits from 0 - 9 
#include<stdio.h>
#include<stdlib.h>
#define ARRAY_SIZE 10
typedef struct Node{
    char key;
    int value;
}KV;
int hash(int key){
    int asciiValue = '0' + key;     //ascii values of integer digits are sequential.. they can be obtained by adding ascii value of 0 to integer digits 
    int index = asciiValue % ARRAY_SIZE;
    return index;
}
void addToHashMap(KV* arrayPointer[], int key ){
    int index = hash(key);
    char keyAsciiValue = (char)('0'+key);
    KV *keyValuePair = (KV *)malloc(sizeof(KV));
    (*keyValuePair).key = keyAsciiValue;
    (*keyValuePair).value = key;
    arrayPointer[index] = keyValuePair;
    
}
int getFromHashMap(KV* arrayPointer[],int key){
    int index = hash(key);
    if(arrayPointer[index] != NULL){
        return arrayPointer[index]->value;       //the dot(.) operator has higher precedence compared to the dereference operator(*)
    }
    else{printf("error Null value\n");}
}

void main(){
    KV* hashMap[10] = {NULL};
    addToHashMap(hashMap,0);
    addToHashMap(hashMap, 9);
    int result1 = getFromHashMap(hashMap, 0);
    int result2 = getFromHashMap(hashMap, 9);
    printf("the value of 0 is : %d\nthe value of 9 is: %d\n", result1, result2);

}