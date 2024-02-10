#include<stdio.h>
#include "userDefinedHeader.h"
void main(){
    Node* ptr = createPerson(22,"sidharth");
    printf("the age of the person is: %d\nthe name of the person is: %s\n",ptr->age,ptr->name);
}