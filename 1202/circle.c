#include <stdio.h>
#include <math.h>

int main(void)
{
  int mode;
  double R, value;

  /*
    ・半径Rの球の体積は(4/3)*PAI*R^3であり、表面積は4PAI*R^2である。
    ・キーボードから半径を入力し、その後、体積か表面積のどちらを計算させたいかを問いかけ表示し、体積を表示させたいときは1を、表面積を表示させたい時は2を選択し、結果を表示するコードを作りなさい。
    　なお、それ以外の入力をした時には“正しい選択をしてください”と表示してください。
  */

  printf("Input radius: ");
  scanf("%lf", &R);
  printf("Input mode (1-2): ");
  scanf("%d", &mode);

  switch (mode) {
    case 1:
      value = 4 * M_PI * pow(R, 3) / 3;
      printf("Volume = %lf\n", value);
      break;
    case 2:
      value = 4 * M_PI * pow(R, 2);
      printf("Surface = %lf\n", value);
      break;
    default:
      puts("正しい選択をしてください");
      break;
  }
  return 0;
}
