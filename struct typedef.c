#include <stdio.h>
#include <string.h>

//in this function, typedef simplify the use of "struct Personal" to "Person"

typedef struct Personal {

    char name[20];
    int age;
    char country[10];

} Person;

int main () {
    Person person;
    
    printf("name: ");
    scanf("%s", &person.name);

    printf("age: ");
    scanf("%d", &person.age);

    printf("country: ");
    scanf("%s", &person.country);

    printf("%s, %d, %s\n", person.name, person.age, person.country);

    return 0;
}