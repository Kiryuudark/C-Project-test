#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int i = 5, test[i];
    ptr = (int*)malloc(i*sizeof(int));

    if (ptr == NULL){
        printf("memmory not allocated");
    }
    else{
        int a;
        for (a=0; i>a; a++){
            printf("Type random numbers: ");
            scanf("%d", &test[a]);       
        }
        ptr = &test;
        sort(ptr, i);
        // I made this printf to check if it was possible for the pointer, in a different function, to change the value of a variable that didn't have it, just the address and it works
        for (a=0; i>a; a++){
            printf("%d ", test[a]);
        }
        printf("\n");
    }

    return 0;
}

sort(int *ptr, int a){
    int i, aux, cont=1;

   while(cont!=0){
        cont=0;
        for (i=0; (a-1)>i; i++){
            // if condition only triggers if previous number is bigger
            if (ptr[i]>ptr[i+1]){
                aux = ptr[i+1];
                ptr[i+1]=ptr[i];
                ptr[i]=aux;
                cont++;
            }
        } 
   }
   /* 
   if you want to print pointer parameters
   for (i=0; a>i; i++){
         printf("%d ",ptr[i]);
    } */
}