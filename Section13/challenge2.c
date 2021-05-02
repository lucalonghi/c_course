#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *);
void printItem(const struct Item *);

int main(){
    struct Item it;
    struct Item *pit;

    pit = &it;

    pit->itemName = malloc((50+1)*sizeof(char));
    if(pit->itemName == NULL)
        return -1;
    
    readItem(pit);
    printItem(pit);

    free(pit->itemName);

    return 0;
}

void readItem(struct Item *it){
    printf("Insert the name of the item: ");
    fgets(it->itemName, 50, stdin);
    it->itemName[strcspn(it->itemName, "\n")] = '\0';
    printf("Insert the quantity of the item: ");
    scanf("%d", &it->quantity);
    printf("Insert the price of the item: ");
    scanf("%f", &it->price);

    it->amount = it->price * it->quantity;
}
void printItem(const struct Item *it){
    printf("Item name: %s\n", it->itemName);
    printf("Item quantity: %d\n", it->quantity);
    printf("Item price: %.2f\n", it->price);
    printf("Item amount: %.2f\n", it->amount);
}