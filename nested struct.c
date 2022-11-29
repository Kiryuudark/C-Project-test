#include <stdio.h>

struct m_adress{
    char street[30];
    int number;
    int zip_code;
    char neighborhood[10];
    char country[10];
};

struct m_person_info{
    char name[30];
    int age;
    char blood_type[2];
    char previous_diseases[20];
    int birth_date;
};

struct m_register{  
    char register_type[20];
    char beneficts[2];

    struct m_person_info personal;
    struct m_adress adress;
};

int main (){
    struct m_register client[2];
    int i;

    printf("Welcome!\n");
    for (i=0;i<1;i++){
        printf("Name: ");
        scanf("%s", &client[i].personal.name);
        printf("Age: ");
        scanf("%d", &client[i].personal.age);
        printf("Blood type: ");
        scanf("%s", &client[i].personal.blood_type);
        printf("Birth date: ");
        scanf("%d", &client[i].personal.birth_date);
        printf("Previous diseases: ");
        scanf("%s", &client[i].personal.previous_diseases);
        printf("\n------\n");
    }

    printf("information stored:\n\n");
    for(i=0;i<1;i++){
        printf("Name: %s", client[i].personal.name);
        printf("\nAge: %d", client[i].personal.age);
        printf("\nBlood Type: %s", client[i].personal.blood_type);
        printf("\nBirth Date: %d", client[i].personal.birth_date);
        printf("\nPrevious diseases: %s", client[i].personal.previous_diseases);
    }
    

    return 0;
}