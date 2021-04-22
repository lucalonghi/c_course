#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(){
    clock_t begin = clock();
    
    int prime[50] = {2, 3};

    for(int i = 3; i <= 100; i++){
        bool found_prime = true;
        for(int k = 0; prime[k] != 0; k++){
            if(i % prime[k] == 0)
                found_prime = false;
            if((prime[k+1] == 0) && (found_prime)){
                prime[k+1] = i;   
            }         
        }
    }

    for(int k = 0; prime[k] != 0; k++){
        printf("%u ",prime[k]);
    }
    printf("\n");

    clock_t end = clock();
    printf("Execution time: %.8lf seconds\n",(double)(end - begin) / CLOCKS_PER_SEC);

    return 0;
}