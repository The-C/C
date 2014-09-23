#include <stdio.h>
// 精确到年，倒计时程序

int main()
{
  int a=0,b=0,c=0,D=0,E=0,F=0;
  printf("请输入倒计时妙数:");
  scanf("%d",&b);
  while(F>=0)
    {
      while(E>=0)
	{
	  while(D>=0)
	    {
	      while(c>=0)
		{
		  while(a>=0)
		    {
		      while(b>=0)
			{
			  while(b>=60)
			    {
			      while(a>=60)
				{
				  while(c>=24)
				    {
				      while(D>=7)
					{
					  while(E>=52)
					    {
					      E=E-52;
					      F=F+1;
					    }
					  D=D-7;
					  E=E+1;
					}
				      c=c-24;
				      D=D+1;
				    }
				  a=a-60;
				  c=c+1;
				}
			      b=b-60;
			      a=a+1;
			    }
			  usleep(1000000);
			  system("clear");
			  printf("|-------------------------------------------------------|\n");
			  printf("|\t    倒计时\t%d年%d周%d日\t%d:%d:%d\t\t|                \n",F,E,D,c,a,b);
			  printf("|\v-------------------------------------------------------|\n");
			  system("date");
			  b--;
			}
		      a=a-1;
		      b=b+60;
		    }
		  c=c-1;
		  a=a+60;
		}
	      D=D-1;
	      c=c+24;
	    }
	  E=E-1;
	  D=D+7;
	}
      F=F-1;
      E=E+52;
    }
  printf("\a");
  //   system("mplayer /home/leee/music/Shi-Zi-Zuo.ape");
  sleep("20");
  return 0;
}
