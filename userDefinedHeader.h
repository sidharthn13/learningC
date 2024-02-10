#include<stdlib.h>
#include<string.h>   
typedef struct{
    char name[10];
    int age;
}Node;
Node* createPerson(int age, char name[]){
    Node* person = (Node*)malloc(sizeof(Node));
    person->age = age;
    strcpy(person->name,name);
    return person;
}