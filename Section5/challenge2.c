#include <stdio.h>

int main(){
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company comp1 = XEROX;
    enum Company comp2 = GOOGLE;
    enum Company comp3 = EBAY;

    printf("%u\n", comp1);
    printf("%u\n", comp2);
    printf("%u\n", comp3);
}