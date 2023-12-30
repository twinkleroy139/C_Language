#include<stdio.h>
#define N 100

int main()
{
    int Orginal_array[N]= {1, 2, 3, 4, 5, 6, 1354, 34534, 4533455, 345355, 4353, 345354, 345345};
    int size = 13;
    printf("Orginal array is :\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", Orginal_array[i]);
    }
    printf("\n\n");
    printf("Reverse array is :\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d\t", Orginal_array[i]);
    }
    
    printf("\n\n");
    printf("\n\n\n");
    return 0;
}
