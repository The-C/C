#include <stdio.h>
// 输入整数的阶乘
int main()
{


  int a,b,c,d,e;
  a=1;
  b=1;
  scanf("%d",&c);
  printf("\n");
  while(b<=c)
    {
      a=a*b;
      b=b+1;
      printf("%d\n",a);
    }
  return 0;
}
