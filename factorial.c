#include <stdio.h>

int main () {

    int value;
    printf("type a number: ");
    scanf("%d", &value);
    printf("Result is: %d\n",factorial(value));
    return 0;
}

int factorial (int value){
    if (value>1){
        return value * factorial(value-1);
    }
    else{
        return 1;
    }
}