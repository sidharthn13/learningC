#include <stdio.h>
void swap(int *p1, int *p2)
{
    *p1 += *p2;
    *p2 = *p1 - *p2;
    *p1 -= *p2;
}
void bubbleSortAsc(int *arr, int size)
{
    while (size > 0)
    {
        int *p1 = arr;
        int *p2 = p1 + 1;
        while (p1 < arr + size)
        {
            if (*p1 > *p2)
            {
                swap(p1, p2);
            }
            p1++;
            p2++;
        }
        size--;
    }
}
void bubbleSortDesc(int *arr, int size, int *endP)
{
    while (size > size / 2)
    {
        int *p1 = arr;
        int *p2 = p1 + 1;
        while (p1 < endP)
        {
            if (*p1 < *p2)
            {
                swap(p1, p2);
            }
            p1++;
            p2++;
        }
        size--;
    }
}
void main()
{
    int arr[] = { 11, 23, 42, 16, 83, 73, 59 };
    int size = sizeof(arr) / sizeof(int);
    bubbleSortAsc(arr, (size + 1) / 2);
    bubbleSortDesc(arr + (size) / 2, size - 1, arr + size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d,", *(arr + i));
    }
}