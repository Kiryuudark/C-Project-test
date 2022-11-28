#include <stdio.h>
#include <string.h>

struct Personal {

    char name[20];
    int age;
    char country[10];

};

int main () {
    struct Personal person;
    
    printf("name: ");
    scanf("%s", &person.name);

    printf("age: ");
    scanf("%d", &person.age);

    printf("country: ");
    scanf("%s", &person.country);

    printf("%s, %d, %s\n", person.name, person.age, person.country);

    return 0;
}