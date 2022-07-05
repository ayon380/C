#include <stdio.h>
int main()
{
  int arry[3][4][5];
  for (int i = 1; i <= 3; i++)
  {
    for (int j = 2; j <= 4; j++)
    {
      for (int k = 3; k <= 5; k++)
      {
        printf("the address of arry[%d][%d][%d] is %u\n", i, j, k, &arry[i][j][k]);
      }
    }
  }
  return 0;
}