    #include <stdio.h>  
    int main ()  
    {  
    int num = 10;  
    printf (" Enter a positive number: ");  
    // scanf (" %d", &num);  


    // use left shift operator to shift the bits  
    num = (num << 2); // It shifts two bits at the left side  
    printf (" \n After shifting the binary bits to the left side. ");  
    printf (" \n The new value of the variable num = %d", num);  
    printf("\n\n\n");

    num = (num >> 2);
    printf (" \n After shifting the binary bits to the right side. ");  
    printf (" \n The new value of the variable num = %d", num);  
    printf("\n\n\n");
    return 0;  
    }  