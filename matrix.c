#include <stdio.h>

//simple function that get size and create a matrix

int main (){
    int size;

    printf("size: ");
    scanf("%d", &size);

    printf("let set the values of matrix\n");
    int matrix[size][size], i, j;

    for (i=0; i<size; i++){
        for (j=0;j<size; j++){
            printf("set the value [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0; i<size; i++){
        for (j=0;j<size; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}