#include <stdio.h>

void square(int *);

int main(){

    int num = 5;

    printf("The square of %d is ", num);

    square(&num);

    printf("%d\n", num);

    return 0;
}

void square(int * num){
    *num *= *num; 
}