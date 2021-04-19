#include <stdio.h>

int main(){
    int minutes;
    double minutes_in_year;
    double minutes_in_day;
    double years = 0;
    double days = 0;

    minutes_in_day = 60.0 * 24.0;
    minutes_in_year = minutes_in_day * 365.0;

    printf("Insert the number of minutes: ");
    scanf("%d", &minutes);

    years = minutes / minutes_in_year;
    days = minutes / minutes_in_day;

    printf("%d minutes are %f days and %f years\n", minutes, days, years);

}