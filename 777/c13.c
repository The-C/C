#include <stdio.h>

int main()

{

  int a,b,c,d;

  a=0;

  while(a<=99)


    {
      a=a+1;
      if(a%2!=0)
	printf("抛弃非偶数:%d\n",a);
      if(a%2==0)
	{
	  b=b+a;
	  printf("偶数%d相加:%d\n",a,b);
	}
    }


  return 0;

}
