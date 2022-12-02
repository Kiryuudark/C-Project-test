#include <stdio.h>

int main (){
    int lengh;

    printf("Set lengh: ");
    scanf("%d", &lengh);

    printf("let set the values of matrix\n");
    int matrix[lengh][lengh], i, j;

    for (i=0; i<lengh; i++){
        for (j=0;j<lengh; j++){
            printf("set the value [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0; i<lengh; i++){
        for (j=0;j<lengh; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}