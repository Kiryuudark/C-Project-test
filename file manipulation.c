#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *file;

    // "w" means write, in other hand means you can write or overwrite a file.
    file = fopen("test.txt", "w");

    if (file == NULL){
        printf("file not found\n");
        return 2;
    }

    fprintf(file, "You shall not PASS");

    fclose(file);
    
    // a means append.
    file = fopen("test.txt", "a");

    //fputs, fputc, fprintf, you only add new content in archive
    fputs("\ndrink",file);
    fclose (file);

    // "r" means read which literally means you can read any text in file
    file = fopen("test.txt", "r");

    if (file == NULL){
        printf("file not found\n");
        return 2;
    }
    // fgets = file get string
    char batata[100];
    while (fgets(batata, 100, file) != NULL){
            printf("%s", batata);
    }
    //if you want compare strings, should use string.h and function strcmp;
    fclose(file);


    return 0;
}