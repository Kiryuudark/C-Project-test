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

    int implement=1;
    while (aux!=NULL) {
        aux->potato=2*implement;
        aux = aux->next;
        implement++;
    };

    aux = first;
    while (aux!=NULL) {
        printf("%d\n", aux->potato);
        aux = aux->next;
    };

    //free (first, second, third, fourth);

    return 0;

}