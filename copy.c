#include <stdio.h>

int main(){
    printf("\n\n");
    int Orginal_Array[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(Orginal_Array)/sizeof(Orginal_Array[00]);
    int Copied_Array[length];

    for (int i = 0; i < length; i++)
    {
        Copied_Array[i] = Orginal_Array[i];
    }

     printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", Orginal_Array[i]);    
    }    
    printf("\n");    
    //Displaying elements of array Copied_Array     
    printf("Elements of new array: \n");

    for (int i = 0; i < length; i++) {     
        printf("%d ", Copied_Array[i]);    
    }    
    printf("\n\n");
    return 0;       


}
