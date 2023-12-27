#include <stdio.h>
void swap(int *p1, int *p2){
    *p1 +=  *p2; 
    *p2 = *p1 - *p2;
    *p1 -= *p2;
}
void main(){
    int num1;
    int num2;
    printf("enter first number:\n");
    scanf("%d",&num1);
    printf("enter second number:\n");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("%d\n%d\n",num1,num2);   
}

