#include <stdio.h>
#include <stdlib.h>

//this function introduces the concepts of pointers, linked lists, adding and subtracting structs and a shallow menu concept.

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
    else{
        printf("empty list");
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

Ptr* clear(Ptr *list, int value){
    Ptr *aux = list; 
    Ptr *previous = list;
    
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
                    value=-1;
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
    int option, value;
    
    while (option!=5){

        system("clear");
        printf("Choose one of following options:\n");
        printf("1 - right insert\n2 - left insert\n3 - erase\n4 - print all values\n5 - leave\n");
        scanf("%d", &option);
        
        if (option==5){
            break;
        }
        else{
                if (option == 1){
                printf("What value do you want to enter?");
                scanf("%d", &value);
                one = right_insert(one,value);
            }
            else{
                if (option == 2){
                    printf("What value do you want to enter?");
                    scanf("%d", &value);
                    one = left_insert(one,value);
                }
                else{
                    if (option == 3){
                        printf("What position do you want to erase?");
                        scanf("%d", &value);
                        one = clear(one,value);
                    }
                    else{
                        system("clear");
                        printf("All values insert:\n");
                        s_print(one);
                        scanf("%d",&value);
                    }                    
                }
            }
        }
    }  

    return 0;
}