#include "./math/math.h"
#include <stdio.h>

int main() {
  int a = 42;
  int b = 7;

  printf("Sum of %d and %d is %d.\n", a, b, add(a, b));

  return 0;
}
