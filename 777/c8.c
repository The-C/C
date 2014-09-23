#include<stdio.h>

int main()
{
  int a,b,c;
  int j,k,l;

  scanf("%d %d %d",&a,&b,&c);
 restat:;
  if(a<b){j=a;a=b;b=j;}
  if(a<c){j=a;a=c;c=j;} 
  if(b<c){j=b;b=c;c=j;}
  printf("------------------\n%d %d %d\n",a,b,c);
  return 0;

}
