// #include <stdio.h>
//  int main(){
//     int var = 100;
//     int *pointer = & var;
//     *pointer = 99;
//     printf("changed value: %d\n",var);
//     printf("memory address : %p\n ", &var);
//     printf("the dereferenced pointer is: %d\n" ,*pointer);
//     return 0;
//  }

// #include <stdio.h>
// void main(){
//    int a = 10;
//    int b = 4;
//    double out = (double)a/ (double)b;  
//    printf("the output is : %f\n",out);
// }

// #include <stdio.h>
// void main(){
//    char myChar = 'a';
//    int myChar2 = (int)myChar;
//    int *ptr = &myChar2;
//    printf("the ascii value of the char datatype is: %d\n", *ptr); 
//    }
   
//arrays:
// #include <stdio.h>
// void main(){
    // int array[10] ={0,1,2,3,4};
    // printf("array memory address: %p\n", &array);
    // printf("array element at index: %d\n", array[4]);
    // printf("array element 1 memory address: %p\n", &array[0]); 

    // char string[] = {'h','i'};
    // int length = sizeof(string)/sizeof(char);
    // for(int i = 0 ;i<length ; i++ ){
    //     printf("%c",string[i]);
//     char string[10] = "hello";
//     printf("%c\n",string[6]);
//     string[5] = 'b';
//     string[7]= 'c'; 
//     printf(string); 
// }

// #include <stdio.h>
// int main(){
//    char string1[] = "hello\n";
//    char string2[] = "world\n";
//    printf("%s%s",string1,string2);
//    printf("%zu\n", sizeof(size_t));
// }

#include<stdio.h>
void main(){
    int testVar = 22;
    int *ptr = &testVar;
    printf("Address is : %p\n", ptr);

}






