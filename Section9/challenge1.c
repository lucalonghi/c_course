#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int, int);

float absoluteValue(float);

float squareRoot(float);

int main(){
    int result = 0;

    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absolute = 0.0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n",result);

    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n",result);

    result = gcd(83, 240);
    printf("The gcd of 83 and 240 is %d\n\n\n",result);


    absolute = absoluteValue (f1);
    printf ("result = %.2f\n", absolute);
    printf ("f1 = %.2f\n", f1);

    absolute = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n", absolute);

    absolute = absoluteValue ( (float) i1 );
    printf ("result = %.2f\n", absolute);

    absolute = absoluteValue (i1);
    printf ("result = %.2f\n", absolute);

    printf ("%.2f\n\n\n\n", absoluteValue (-6.0) / 4 );


    printf("%.2f\n", squareRoot(-3.0));
    printf("%.2f\n", squareRoot(16.0));
    printf("%.2f\n", squareRoot(25.0));
    printf("%.2f\n", squareRoot(9.0));
    printf("%.2f\n", squareRoot(225.0));


    return 0;
}

int gcd(int a, int b){
    if(!a && !b)
        return 0;
    if(a == 0)
        return b;
    if(b == 0)
        return a;

    return gcd(b, a%b);
}

float absoluteValue(float value){
    if(value < 0.0)
        value = -value;
    
    return value;
}

float squareRoot(float value){
    if(value < 0.0){
        printf("Impossible to calculate the Square root of a negative number!\n");
        return -1.0;
    }
    return sqrt(absoluteValue(value));
}