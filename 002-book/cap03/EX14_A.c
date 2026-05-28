#include <stdio.h>

int main() {

  int year, born, age, age2050;

  printf("Enter the current year: ");
  scanf("%d", &year);

  printf("Year of birth: ");
  scanf("%d", &born);

  age = year - born;
  age2050 = 2050 - born;

  printf("\nYour current age: %d\n", age);
  printf("Your age in 2050: %d\n", age2050);

  return 0;
}