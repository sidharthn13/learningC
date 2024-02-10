// program to convert a given number into a string
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int num;
    printf("enter a number: \n");
    scanf("%d", &num);
    int numCpy = num;
    int numLen = 0;
    while (numCpy != 0)
    {
        numCpy = numCpy / 10;
        numLen++;
    }
    if (num == 0)
    {
        printf("the number is: %c\n", '0');
    }
    else if (num > 0)
    {
        char *result = (char *)malloc((numLen + 1) * sizeof(char));
        int div = (int)round(pow(10, numLen - 1));
        result[numLen] = '\0';
        int index = 0;
        while (num != 0)
        {
            int digit = num / div;
            char charValue = (char)('0' + digit);
            result[index] = charValue;
            num = num % div;
            div = div / 10;
            index++;
        }
        printf("the  number is : %s\n", result);
    }
    else
    {
        num = -1 * num;
        char *result = (char *)malloc((numLen + 2) * sizeof(char));
        int div = (int)round(pow(10, numLen - 1));
        result[numLen] = '\0';
        result[0] = '-';
        int index = 1;
        while (num != 0)
        {
            int digit = num / div;
            char charValue = (char)('0' + digit);
            result[index] = charValue;
            num = num % div;
            div = div / 10;
            index++;
        }
        printf("the  number is : %s\n", result);
    }
}
