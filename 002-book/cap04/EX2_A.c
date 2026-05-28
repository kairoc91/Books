#include <stdio.h>

int main() {
  int n, e, i, j, fat;

  printf("Enter n value: ");
  scanf("%d", &n);

  e = 1;

  for (i = 1; i <= n; i++) {
    fat = 1;
    for (j = 1; j <= i; j++) {
      fat *= j;
    }
    e += (1 / fat);
  }

  printf("Value of e: %d\n", e);

  return 0;
}