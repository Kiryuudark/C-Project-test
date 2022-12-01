#include <stdio.h>

//in this function is introduced the concept of linked list.
//first, second, third and fourth are linked lists made with pointers

typedef struct {
    int value;
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
        aux->value=2*implement;
        aux = aux->next;
        implement++;
    };

    aux = first;
    while (aux!=NULL) {
        printf("%d\n", aux->value);
        aux = aux->next;
    };

    free(first);
    free(second);
    free(third);
    free(fourth);

    return 0;

}