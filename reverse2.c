
#include <stdio.h>
#define MAX_SIZE 100      // Defines maximum size of array

int main()
{
    int arr[MAX_SIZE] = {1, 2 , 3, 4, 5, 6};
    int size = 6, i;

    // /* Input size of array */
    // printf("Enter size of the array: ");
    // scanf("%d", &size);

    /* Input array elements */
    printf("Elements in array: ");
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }

    /*
     * Print array in reversed order
     */
    printf("\nArray in reverse order: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\n\n");
    return 0;
}