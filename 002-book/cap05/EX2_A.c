#include <stdio.h>

int main() {

  float n, e, i, j, fat;

  printf("Enter n value: ");
  scanf("%f", &n);

  e = 1.0;

  for (i = 1; i <= n; i++) {
    fat = 1;
    for (j = 1; j <= i; j++) {
      fat *= j;
    }
    e += 1.0 / fat;
  }

  printf("e value: %.2f \n", e);
  return 0;
}