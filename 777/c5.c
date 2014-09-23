#include<stdio.h>

int main()
{
  double a,b,c,d;
  printf("请输入两个数值\n");
  scanf("%lf\n%lf",&a,&b);
  //a=9;
  //b=3;
  c=a-b;
  printf("%lf-%lf=%lf\n",a,b,c);
  c=a+b;
  printf("%lf+%lf=%lf\n",a,b,c);
  c=a*b;
  printf("%lf*%lf=%lf\n",a,b,c);
  c=a/b;
  printf("%lf/%lf=%lf\n",a,b,c);
  return 0;
}
