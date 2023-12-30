#include<stdio.h>

int main()
{
    printf("Hello__Brother\n");
    // int OrginalArray[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    int OrginalArray[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(OrginalArray)/sizeof(OrginalArray[0]);
    int CopiedArray[length];

    for (int i = 0; i < length; i++)
    {
        CopiedArray[i] = OrginalArray[i];
    }
    
    printf("Orginal_Array :\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", OrginalArray[i]);
    }
    printf("\n\n");
     printf("Copied_Array :\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", CopiedArray[i]);
    }  
    printf("\n\n"); 
return 0;
}