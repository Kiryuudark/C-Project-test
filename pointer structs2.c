#include <stdio.h>

//this function introduces the concept of passing between structs, deletion and inclusion in a shallow way

typedef struct{
    int value;
    int *next;
} Ptr;

int main(){

    Ptr *one = (Ptr*) malloc (sizeof(Ptr*)), 
    *two = (Ptr*) malloc (sizeof(Ptr*)), 
    *three = (Ptr*) malloc (sizeof(Ptr*)), *test = one;

    one->value=2;
    two->value=2;
    three->value=2;

    one->next = two;
    two->next = three;
    three->next = NULL;

     while(test!=NULL){
        printf("%d\n",test->value);
        test = test->next;
    }
    //include raw function
    printf("-----\n");
    Ptr *one_half = (Ptr*) malloc(sizeof(Ptr));
    one_half->value=3;
    one->next = one_half;
    one_half->next = two;

    test = one;
    while(test!=NULL){
        printf("%d\n",test->value);
        test = test->next;
    }

    //exclude raw function
     printf("-----\n");
    one->next = two;
    free (one_half);
    test = one;
    while(test!=NULL){
        printf("%d\n",test->value);
        test = test->next;
    }

    return 0;
}