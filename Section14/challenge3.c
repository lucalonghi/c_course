#include <stdio.h>

int main(){

    FILE *fp = NULL;
    long pos_byte = 0L;

    fp = fopen("Test2.txt","r");
    if(fp == NULL){
        printf("Error opening the file\n");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    pos_byte = ftell(fp);
    for(long i = 1L; i <= pos_byte; i++){
        fseek(fp, -i, SEEK_END);
        char c = fgetc(fp);
        printf("%c", c);
    }
    
    printf("\n");
    fclose(fp);

    return 0;
}