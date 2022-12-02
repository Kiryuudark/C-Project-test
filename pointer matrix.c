#include <stdio.h>

//this function use malloc and a pointer to create a new matrix.

int main (){
    int size;
    printf("Set size: ");
    scanf("%d", &size);

    printf(("let's define the values of the matrix\n "));

    int i, *pointer, aux;
    pointer = (int*) malloc((size*size)*sizeof(int));

    for (i=0; i<(size*size); i++){
            printf("matrix [%d] = ",i);
            scanf("%d", &pointer[i]);
    }
    printf("\n");

    printf("Matrix typed: \n");
    for (i=0; i<(size*size); i++){
        printf("%d ", *(pointer));
        pointer++;
        if (i!=0 && ((i+1)%size)==0)
            printf("\n");

    }

    free(pointer);
    return 0;
}