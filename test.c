#include <stdio.h>
#include <stdlib.h>
void generate(char arr[], int open, int close, int count)
{

    if (open == 0 && close == 0)
    { 
        *(arr+count) = '\0';
        printf("%s\n", arr);
        return;
    }
    if (open > 0)
    { 
        *(arr+count) = '(';
        generate(arr, open - 1, close, count + 1);
    }

    if (open < close)
    { 
        *(arr+count) = ')';
        generate(arr, open, close - 1, count + 1);
    }
}
void main()
{
    int input;
    printf("please enter the input integer:\n");
    scanf("%d", &input);
    int size = 2*input +1;
    char *arr = (char*)malloc(size* sizeof(char));
    // char arr[7];
    generate(arr, input, input, 0);
    free(arr);
}   