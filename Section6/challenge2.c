#include <stdio.h>

int main(){

    printf("Number of bytes of int variable is %zd\n", sizeof(int));
    printf("Number of bytes of short variable is %zd\n", sizeof(short));
    printf("Number of bytes of char variable is %zd\n", sizeof(char));
    printf("Number of bytes of long variable is %zd\n", sizeof(long));
    printf("Number of bytes of long long variable is %zd\n", sizeof(long long));
    printf("Number of bytes of float variable is %zd\n", sizeof(float));
    printf("Number of bytes of double variable is %zd\n", sizeof(double));
    printf("Number of bytes of long double variable is %zd\n", sizeof(long double));

}