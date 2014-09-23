#include <stdio.h>

int main()
{

  int a,i;
  a=0;
  i=1;
  while(i<=100)
    {

      i=i+1;
      if(i%7==0 || i%10==7)
	a=a+i;
    }
  printf("%d \n",a);
  return 0;
}
