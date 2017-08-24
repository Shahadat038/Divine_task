#include <stdio.h>
#include<conio.h>
#include<math.h>

int main(void)
{
  int i, j;
  int num;

  for(i = 1;i <= 10;++i)
  {

    num = 1;


    for(j = 1;j <= i;++j)
      num *= j;


    printf("%d\t%d\n", i, num);
  }

  return 0;
}
