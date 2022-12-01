#include <stdio.h>

//Nested structs are structs within struct. 
//This function shows how it works, how to implement and how can be used for.

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
    char blood_type[3];
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
    int i, cont=2;
    struct m_register client[cont];

    printf("Welcome!\n");
    for (i=0;i<cont;i++){
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
        system("clear");
        printf("Type Street: ");
        scanf("%s", &client[i].adress.street);
        printf("Number: ");
        scanf("%d", &client[i].adress.number);
        printf("Zip code: ");
        scanf("%d", &client[i].adress.zip_code);
        printf("Neighborhood: ");
        scanf("%s", &client[i].adress.neighborhood);
        printf("Country: ");
        scanf("%s", &client[i].adress.country);
        system("clear");
        printf("Register type: ");
        scanf("%s", &client[i].register_type);
        printf("Beneficts: ");
        scanf("%s", &client[i].beneficts);
        system("clear");
    }
    printf("\n------\n");
    printf("information stored:\n\n");

    for(i=0;i<cont;i++){
        printf("Name: %s", client[i].personal.name);
        printf("\nAge: %d", client[i].personal.age);
        printf("\nBlood Type: %s", client[i].personal.blood_type);
        printf("\nBirth Date: %d", client[i].personal.birth_date);
        printf("\nPrevious diseases: %s", client[i].personal.previous_diseases);
        printf("\nStreet: %s", client[i].adress.street);
        printf("\nNumber: %d", client[i].adress.number);
        printf("\nZip Code: %d", client[i].adress.zip_code);
        printf("\nNeighborhood: %s", client[i].adress.neighborhood);
        printf("\nCountry: %s", client[i].adress.country);
        printf("\nRegister Type: %s", client[i].register_type);
        printf("\nBeneficts: %s\n\n", client[i].beneficts);
    }
    

    return 0;
}