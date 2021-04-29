#include <stdio.h>

int main(){
    int var = 5;
    int* pVar = &var;

    printf("Address of var: %p\n", &var);
    printf("Address of pVar: %p\n", &pVar);
    printf("Value of pVar: %p\n", pVar);
    printf("Value of variable pointed by pVar: %d\n", *pVar);

    return 0;
}