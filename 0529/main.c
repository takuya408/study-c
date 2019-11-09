#include <stdio.h>
int main(void) {
  double x1 = 1.0, x2 = 2.0, c;
  while(1) {
    c = (x1 + x2) / 2.0;
    if (c * c - 2 > 0) {
      x2 = c;
    } else {
      x1 = c;
    }
    printf("c: %.4f\n", c);
    printf("\nx1: %.4f\nx2: %.4f\n", x1, x2);
    printf("\nx2 - x1: %.4f\n", x2 - x1);
    if (x2 - x1 < 0.01) {
      break;
    }
  }
  printf("\n%.4f\n", c);
  return 0;
}
