#include <stdio.h>
#include <stdlib.h>

int main(){
    char * string = NULL;
    int size = 0;

    printf("Insert the number of caracters that u want to enter: ");
    scanf("%d", &size);

    string = malloc((size + 1) * sizeof(char));   //(char *)calloc(size + 1, char)
    if(string != NULL){
        printf("Insert the string of %d size: ", size);
        sscanf("%*s", string);    //gets(string)

        printf("The string that u entered is \"%s\"\n", string);
    }
    
    free(string);

    return 0;
}