#include <stdio.h>
#include <math.h>

int main(void)
{
  double y1, y2, x = 0;

  /*
    今、二つの直線がある。
    一つは、y=3x+0,もう一つはy=5x-10である。
    両者が交差するときの、xの値を求めたい。
    Xを0.01づつ増やしてゆき、両者が一致するときのxを求めなさい。
  */

  do {
    x += 0.01;
    y1 = 3 * x;
    y2 = 5 * x - 10;
  } while (fabs(y1 - y2) >= 0.001);
  printf("Point of intersection: %lf\n", x);
  return 0;
}
