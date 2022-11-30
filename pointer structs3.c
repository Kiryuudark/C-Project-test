//i created this to implement functions to do what i've done until now

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int *next;
} Ptr;


Ptr* right_insert (Ptr *list, int value){
    Ptr *new = (Ptr*)malloc(sizeof(Ptr)), *aux = list;  
    
    new->value = value;
    new->next = NULL;

    if (list!=NULL){
        while(list->next!=NULL){
            list = list->next;
        }
        list->next = new;
        return aux;
    } 
    return new;  
}

void s_print(Ptr *list){
    if (list!=NULL){
        while(list!=NULL){
            printf("%d\n", list->value);
            list=list->next;
        }
    }
}

Ptr* left_insert (Ptr *list, int value){
    Ptr *new = (Ptr*)malloc(sizeof(Ptr)), *aux = list;  
  
    new->value = value;
    if (list==NULL)
        new->next = NULL;
    else
        new->next = list;

    return new;  
}

Ptr* change (Ptr *list, int value){
    Ptr *aux = list; 
    Ptr *previous = list;
    

    //previous->next = aux;
    if (list==NULL){
        printf("there's no value in list");
    }
    else{
        if(value==1){
            list=list->next;
        }
        else{
        value--;
        while(value>0){
            value--;
            if(aux==NULL){
                printf("this position doesn't exist\n");
                break;
            }
            else {
                previous=aux;
                aux = aux->next;
            }
        }
        if(value==0){
            if(aux->next == NULL){
                previous->next=NULL;
                aux = NULL;
            }
            else {
                previous->next = aux->next;
                aux = NULL;
            }
        }
        }
    }
    return list;
    
}

int main(){

    Ptr *one = NULL;
    int option;
    /*
    printf("what do u want to do?");
    printf("1 - right insert\n2 - left insert\n3 - erase\n4 - print all values\n5 - leave");
    scanf("%d", &option);
    */
    one = right_insert(one, 10);
    one = left_insert(one, 8);
    one = right_insert(one, 1);
    //one = left_insert(one, 2);
    s_print(one);
    printf("\n\n");

    one = change(one, 2);
    s_print(one);
    return 0;
}