#include <stdio.h>
#include <ctype.h>

int main(){

    FILE *fo = NULL;
    FILE *ft = NULL;

    fo = fopen("Test1.txt", "r");
    if (fo == NULL){
        printf("Error opening the file\n");
        return -1;
    }

    ft = fopen("Temporary.txt", "w");
    if (ft == NULL){
        printf("Error opening the file\n");
        return -1;
    }


    int c;

    while((c = fgetc(fo)) != EOF){
        if(islower(c))
            c = toupper(c);
        
        fputc(toupper(c), ft);
    }

    fclose(fo);
    fclose(ft);
    rename("Temporary.txt","Test1.txt");

    fo = fopen("Test1.txt", "r");
    
    if (fo == NULL){
        printf("Error opening the file\n");
        return -1;
    }
    while((c = fgetc(fo)) != EOF){
        printf("%c",c);
    }

    fclose(fo);
    return 0;
}