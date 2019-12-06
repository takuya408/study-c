#include <stdio.h>
#include <math.h>
#define COUNT 10

int main(void)
{
  int i, score[COUNT] = {20, 30, 40, 50, 60, 70, 43, 47, 90, 100};
  double average, stdev, sum = 0, sum_squares = 0;

  /*
    いま、10人の試験結果をえた。
    おのおの、20,30,40,50,60,70,43,47,90,100点であった。
    この平均値と、標準偏差を求めたい。
    この点数を画面入力するように、コードを作りなさい。
  */

  for (i = 0; i < COUNT; i++) {
    sum += score[i];
    sum_squares += pow(score[i], 2);
  }

  average = sum / COUNT;
  stdev = sqrt(sum_squares / COUNT - pow(average, 2));

  printf("Average = %lf\nStandard deviation = %lf\n", average, stdev);
  return 0;
}
