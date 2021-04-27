#include <stdio.h>
#include <stdbool.h>

int count_c(const char* );
void conc_strings(char*,const char*,const char* );
bool comp_strings(const char*, const char*);

int main(){
    char count_string[] = "Luca Longhi programmatore";
    printf("Number of caracters in the %s string is: %d\n",count_string,count_c(count_string));

    char conc_1[] = "Luca Longhi";
    char conc_2[] = " programmatore";
    char conc_result[count_c(conc_1)+count_c(conc_2)+1];

    conc_strings(conc_result,conc_1,conc_2);
    printf("Stringa concatenata: %s\n",conc_result);

    char comp1[] = "Luca";
    char comp2[] = "Longhi";
    char comp3[] = "Longhi";

    if (comp_strings(comp1,comp2))
        printf("Stringa %s è uguale a %s\n",comp1,comp2);
    else
        printf("Stringa %s è diversa da %s\n",comp1,comp2);


    if (comp_strings(comp2,comp3))
        printf("Stringa %s è uguale a %s\n",comp2,comp3);
    else
        printf("Stringa %s è diversa da %s\n",comp2,comp3);

    return 0;
}

int count_c(const char* str){
    int counter = 0;
    for(int i = 0; str[i] != '\0'; i++)
        counter = i;
    return counter+1;
}

void conc_strings(char* result,const char* str1,const char* str2){
    int index = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        result[i] = str1[i];
        index = i;
    }
    for(int i = 0; str2[i] != '\0'; i++){
        result[i+index] = str2[i];
        if (str2[i+1] == '\0'){
            result[i+index+1] = '\0';
        }
    }
}

bool comp_strings(const char* str1, const char* str2){
    if(count_c(str1) != count_c(str2))
        return false;

    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] != str2[i])
            return false;
    }

    return true;

}
