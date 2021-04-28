#include <stdio.h>
#include <string.h>

void reverse(const char*, char*);
void sort(char [][50], int n);

int main(){
    char input[50] = {};

    printf("Insert the string to be reversed: ");
    scanf("%s",input);

    char reversed[strlen(input)+1];

    reverse(input,reversed);
    
    printf("The string reversed is: %s\n", reversed);

    char input_sort[25][50];
    int n;

    printf("Input number of strings: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++){
        printf("Insert string number %d: ", i+1);
        scanf("%s", input_sort[i]);
    }
    sort(input_sort,n);
    printf("Strings sorted:\n");
    for (int i = 0; i < n; i++){
        printf("%s\n", input_sort[i]);
    }

    return 0;
}

void reverse(const char* input, char* reversed){
    int i = 0;

    while(i < strlen(input)){
        reversed[i] = input[strlen(input) - i - 1];
        i++;
    }
    reversed[i] = '\0';
}

void sort(char in[][50], int n){
    for(int i = n-1; i > 0; i--)
        //con la prima iterazione viene trovato la stringa maggiore di tutte partendo dalla prima fino a n-1 (ovvero alla fine se stessa)
        //alla successiva i decrementa avendo trovato il massimo tocca il valora appena prima e così via
        for(int j = 0; j < i; j++)
            if(strcmp(in[j], in[j+1]) > 0){
                char temp[strlen(in[j])+1];
                char debug1[strlen(in[j])+1];
                strncpy(debug1, in[j], sizeof(debug1) - 1);
                char debug2[strlen(in[j+1])+1];
                strncpy(debug2, in[j+1], sizeof(debug2) - 1);
                strncpy(temp, in[j], sizeof(temp) - 1);
                strncpy(in[j], in[j+1], sizeof(in[j]) - 1);
                strncpy(in[j+1], temp, sizeof(in[j] + 1) - 1);
            }
}