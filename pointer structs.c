#include <stdio.h>

typedef struct {

    int potato;
    int *next;
} Ptr;

int main(){
    Ptr *first= (Ptr*) malloc(sizeof(Ptr)), 
    *second = (Ptr*) malloc(sizeof(Ptr)), 
    *third = (Ptr*) malloc(sizeof(Ptr)), 
    *fourth = (Ptr*) malloc(sizeof(Ptr)), *aux = first;

    first->next= second;
    second->next= third;
    third->next= fourth;
    fourth->next= NULL;

    first->potato=2;
    second->potato=4;
    third->potato=8;
    fourth->potato=16;


    while (aux!=NULL) {
        printf("%d\n", aux->potato);
        aux = aux->next;
    };
    return 0;

}