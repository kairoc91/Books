#include <stdio.h>

int main() {

  int n1, n2;
  printf("Enter first number: ");
  scanf("%d", &n1);

  printf("Enter second number: ");
  scanf("%d", &n2);

  if (n1 > n2) {
    printf("The bigger number is: %d\n", n1);
  } else if (n2 > n1) {
    printf("The bigger number is: %d\n", n2);
  } else {
    printf("The numbers are the same!\n");
  }
  return 0;
}