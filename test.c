#include <stdio.h>
#include <math.h>
void main()
{
    int num;
    printf("enter the number:");
    scanf("%d", &num);
    int counter = 1;
    while(num>=pow(10, counter)){
        int digitSelector = round(pow(10,counter));
        int digitsPlace = round(pow(10,counter-1));
        if((num%digitSelector)/digitsPlace == 0){
            num += digitsPlace;
        }
     counter++;
    }
    printf("The modified number is: %d\n", num);
}  