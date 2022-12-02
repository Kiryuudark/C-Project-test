#include <stdio.h>

// this function plots identity matrix of any lengh

int main (){
    int size;
    printf("Set size: ");
    scanf("%d", &size);

    int i, j=0, *pointer, aux;
    pointer = (int*) malloc((size*size)*sizeof(int));

    pointer=NULL;
    if (pointer == NULL){
        printf("memory not allocated\n");
    }
    else{
        for (i=0; i<(size*size); i++){
            // each "1" of the identity matrix has a different position per line in a pointer array, so J value is incremented whenever we change the line through the lower if, and this every check if we found the right position. 
            if (i%size==j){
                pointer[i]=1;
            }
            else{
                pointer[i]=0;
            }
            if(i!=0 && (i+1)%size==0){
                j++;
            }
        }
        printf("\n");

            printf("Identity Matrix of %d: \n", size);
        for (i=0; i<(size*size); i++){
            printf("%d ", *(pointer));
            pointer++;
            if (i!=0 && ((i+1)%size)==0)
                printf("\n");

        }
        free(*pointer);
    }
    return 0;
}