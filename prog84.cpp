#include <stdio.h>

struct Product
{
    char name[50];
    double price;
};

void printProductInfo(Product pd)
{
    printf("Product Name: %s\n", pd.name);
    printf("Product Price: %.2f", pd.price);
}

int main()
{
    Product MyProduct = {"Sunsilk", 20.25};
    printProductInfo(MyProduct);
}