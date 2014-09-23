#include <stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d",&a,&b,&c);
  printf("整数 %d %d %d 的平均值为：",a,b,c);

  printf("如果***在河边泡妞，你会怎么做？\n"
	 "A,推他们两个下去！！\n"
	 "B,冲上去强抢女生\n"
	 "C,打满酱油然后路过\n"
	 "D,冲上去强抢***\n");
    d=a+b+c;
  d=d/3;
  printf("%d\n",d);
  return 0;
}
