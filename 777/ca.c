#include <stdio.h>
#include <stdlib.h>
int main()
{
  printf("玩一个10次机会的猜数游戏。\n");
  printf("提示；是200以内的数。\n");
  int a,b,sum;
  sum=10;
  srand((unsigned)time(NULL));
  a = rand()%200;
  scanf("%d",&b);
  while(1)
    {
      if(b>a)
	{
	  printf("亲爱的，大了。\n");
	  scanf("%d",&b);
	}
      if(b<a)
	{
	  printf("亲爱的，小了。\n");
	  scanf("%d",&b);
	}
      if(b==a)
	{
	  printf("就是他！太好了！\n");
	  break;
	}
      if(sum==0)
	{
	  printf("算了吧，告诉你吧，他是%d，欢迎下次再来！\n",a);
	  break;
	}
    }
  system("pause");
  return 0;
}
