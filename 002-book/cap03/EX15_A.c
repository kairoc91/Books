#include <stdio.h>

int main() {

  float factory, saller, tax, profitSaller, taxValue, carValue;

  printf("Enter factory price: ");
  scanf("%f", &factory);

  printf("Enter seller's percentage: ");
  scanf("%f", &saller);

  printf("Enter tax percentage: ");
  scanf("%f", &tax);

  profitSaller = factory * saller / 100;
  taxValue = factory * tax / 100;
  carValue = factory + profitSaller + taxValue;

  printf("Saller profit: %.2f \nTax value: %.2f \nCar value: %.2f\n",
         profitSaller, taxValue, carValue);
  return 0;
}