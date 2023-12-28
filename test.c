#include<stdio.h>
#include<math.h>
void main(){
    int num;
    printf("Enter the number to be reversed:");
    scanf("%d", &num);
    double result = 0;
    int counter = 1;
    while(num!=0){
        double digit = (num%10);
        result += digit * pow(10,-1*counter);
        counter++;
        num = num/10;
    }
    result *= pow(10, counter-1);
    printf("the reversed integer is: %d\n", (int)result);   
}