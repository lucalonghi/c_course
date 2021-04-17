#include <stdio.h>

int main(){
    double height = 3.5;
    double width = 4.4;
    double perimeter = 2 * (height + width);
    double area = width * perimeter;

    printf("Perimeter of triangle is: %.2f\n",perimeter);   //or %g
    printf("Area of triangle is: %.2f\n",area);     //or %g

}