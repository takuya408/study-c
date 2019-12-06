#include <stdio.h>
#define DAY_TOTAL 100

int main(void)
{
  int A[2], B[2];
  double dx_A, dx_B, S;

  /*
    ・A君とB君がいます。二人とも、数学の勉強をしています。二人の1学期の成績を比較すると、Aは学期初めに数学を70点、B君は45点を取りました。
    　しかし、学期の終わりには、A君は80点、B君は100点でした。
    　今、学期の長さを100日とすると、B君がA君を抜いたのはいつだったといえるでしょうか？
    　1学期の開始日からの通算日を答えなさい。
  */

  printf("Input first value (A, B): ");
  scanf("%d %d", &A[0], &B[0]);
  printf("Input final value (A, B): ");
  scanf("%d %d", &A[1], &B[1]);

  dx_A = (double)(A[1] - A[0]) / DAY_TOTAL;
  dx_B = (double)(B[1] - B[0]) / DAY_TOTAL;
  S = (A[0] - B[0] + dx_A * DAY_TOTAL) / (dx_A + dx_B);
  if (S - (int)S) S = (int)S + 1;
  printf("Answer: %d\n", (int)S + 1);
  return 0;
}
