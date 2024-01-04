#include <stdio.h>
#include<string.h>

struct Dog{
    char breed[12];
    int age;
};

int main(){
    struct Dog dog1;
    dog1.age = 2;
    strcpy(dog1.breed, "alsatian ");    
    printf("%s\n", dog1.breed);
    struct Dog *structP = &dog1;
    printf("the memory location of the struct is: %p\n", structP);
    printf("the memory location of the breed member is: %p\n", structP);
    printf("the memory location of the age member is: %p\n", structP+1);
    return 0;
}