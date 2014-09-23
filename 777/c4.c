#include<stdio.h>

int main()
{
  int d,e,f,g,h,j,k,l;
  float a,b,c;
  a=123456789;b=43214321;c=3;e=7078;f=8712;j=123;k=3456657;l=6575675;
  d=a+b;
  c=10.1*(10*10);
  b=1.1*100;
  g=e*f;
  h=j*(k+l);
  a=1.2+2.3+3.4+4.5;
  printf("\033[31m\033[1m"); // 开始以红色打印
  printf("%f\n%f\n%f\n%d\n",a,b,c);
  printf("\033[0m"); //去除颜色
  //  sleep(10);
	 return 0;
}
