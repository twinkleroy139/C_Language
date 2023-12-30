#include<stdio.h>

int main()
{
    int array[] = {11, 22, 33, 44, 55, 66, 77, 88};
    int length = sizeof(array)/sizeof(array[0]);
    int n = 3;

    printf("Orginal Array is :\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n\n");

    printf("Reverse Array is :\n");
    for (int i = length-1; i >= 0; i--)
    {
        printf("%d\t", array[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int j;
        int first = array[0];
        for (int j = 0; j < length-1; j++)
        {
             array[j] = array[j + 1];  
        }
        array[j] = first; 
    }
    
    printf("\n\n");
    printf("Array after LEFT Rotate: \n");
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    
    printf("\n\n");

    return 0;

}