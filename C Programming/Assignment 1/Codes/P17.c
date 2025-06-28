#include <stdio.h>
int main() {
 float costPrice, sellingPrice;
 printf("SHIV ARORA\n");
 printf("Enter the Cost Price: \n");
 scanf("%f", &costPrice);
 printf("Enter the Selling Price: \n");
 scanf("%f", &sellingPrice);
 if (sellingPrice > costPrice) printf("You made a profit of: %.2f\n", sellingPrice - costPrice);
 else if (sellingPrice < costPrice) printf("You incurred a loss of: %.2f\n", costPrice - sellingPrice);
else printf("There is no profit or loss.\n");
 return 0;
}
