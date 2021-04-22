#include <stdio.h>

int main(){
    float rainfall[5][12] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    float monthlyAverages[12] = {};

    float yearsRain[5] = {};
    float yearlyAverage = 0.0;

    printf("YEAR\tRAINFALL (inches)\n");

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 12; j++){
            yearsRain[i] += rainfall[i][j];
            monthlyAverages[j] += rainfall[i][j];
        }
        yearlyAverage += yearsRain[i];

        printf("201%u\t%.1f\n",i,yearsRain[i]);
    }

    yearlyAverage /= 5.0; 
    printf("\nThe yearly average is %.1f inches\n",yearlyAverage);
    printf("\nMONTHLY AVERAGES:\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for(int j = 0; j < 12; j++){
        monthlyAverages[j] /= 5.0;
        printf("%.1f ",monthlyAverages[j]);
    }
        
    printf("\n");

    return 0;
}
