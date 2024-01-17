#include <stdio.h>
void generate(char arr[], int open, int close, int count)
{

    if (open == 0 && close == 0)
    { 
        printf("%s\n", arr);
        return;
    }
    if (open > 0)
    { 
        arr[count] = '(';
        generate(arr, open - 1, close, count + 1);
    }

    if (open < close)
    { 
        arr[count] = ')';
        generate(arr, open, close - 1, count + 1);
    }
}
void main()
{
    int input = 3;
    char arr[7];
    generate(arr, input, input, 0);
}   