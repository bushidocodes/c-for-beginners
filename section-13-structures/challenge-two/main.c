#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 30

struct Item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct Item *const item);
void printItem(const struct Item *const item);

int main(void)
{
    struct Item myItem = {};
    readItem(&myItem);
    printItem(&myItem);
    // Free the dynamic memory I allocated for myItem.
    free(myItem.itemName);
    myItem.itemName = NULL;
    return 0;
}

void printItem(const struct Item *const item)
{
    printf("*******************************************************\n");
    printf("* Product Name: %s\n", item->itemName);
    printf("* Product Price: $%.2f\n", item->price);
    printf("* Product Quantity: %d\n", item->quantity);
    printf("* Product Amount: $%.2f\n", item->amount);
    printf("*******************************************************\n");
};

void readItem(struct Item *const item)
{
    char temp[SLEN + 1] = ""; /* We add a character because we are going to capture and filter out an extra \n char */
    printf("Enter Product Name: ");
    fgets(temp, SLEN, stdin);
    temp[strcspn(temp, "\n")] = 0;
    item->itemName = (char *)calloc(strlen(temp), sizeof(char));
    if (item->itemName == NULL) /* Exit if dynamic allocation failed */
    {
        exit(-1);
    }
    strcpy(item->itemName, temp);
    printf("Enter Product Price: $");
    scanf("%f", &item->price);
    printf("Enter Product Quantity: ");
    scanf("%d", &item->quantity);
    item->amount = item->price * item->quantity;
};