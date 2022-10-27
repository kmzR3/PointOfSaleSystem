// Author: Mohamed Mohamed DSE-02-0518-2022
// Date: 2022-010-27

#include <stdio.h>
int main() {
    float quantity, price, total, recieved, change;
    int vat = 16;
    printf("Enter the quantity: ");
    scanf("%f", &quantity);
    printf("Enter the price: ", &price);
    scanf("%f", &price);
    printf("Enter the amount recieved: ");
    scanf("%f", &recieved);
    total = quantity * price;
    printf("Total: %f\n", total);
    printf("VAT: %f\n", total * vat / 100);
    printf("Total with VAT: %f\n", total + (total * vat / 100));
    change = recieved - (total + (total * vat / 100));
    printf("Change: %f\n", change);

    return 0;

}
