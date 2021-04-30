#include <stdio.h>

int calcLength(const char* );

int main (){

    char string[] = "Ciao Luca Longhi";

    printf("La lunghezza della stringa \"%s\" è %d\n", string, calcLength(string));

    return 0;
}

int calcLength(const char* string){
    const char* pEnd = string;
    while (*pEnd)   //(*pEnd != '\0')
        pEnd++;
        
    return pEnd - string; 
}