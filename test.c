#include <stdio.h>
 int main(){
    int var = 100;
    int *pointer = & var;
    *pointer = 99;
    printf("changed value: %d\n",var);
    printf("memory address : %p/n ", &var);
    return 0;
 }
 


