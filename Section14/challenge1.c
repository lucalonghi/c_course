#include <stdio.h>

int main(){

    FILE *fp = NULL;

    fp = fopen("Test.txt", "r");
    if (fp == NULL){
        printf("Error opening the file\n");
        return -1;
    }

    int c;
    int counter = 0;

    do{
        c = fgetc(fp);
        if (c == '\n')
            counter++;
    }while(c != EOF);
    
    counter++;
    printf("The file contains %d lines\n", counter);

    fclose(fp);
    return 0;
}