#include <stdio.h>
#include <stdlib.h>

// in this function pointer is used to show a value;

int main()
{
    int *ptr;

    ptr = (int*)malloc(1*sizeof(int));

    if (ptr == NULL){
        printf("memmory not allocated");
    }
    else{
        *ptr = 8;
        printf("pointer value: %d\n", *ptr);
    }

    return 0;
}