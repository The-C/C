#include <stdio.h>
int main()
{
  int carry,n,j;
  int a[40001];
  int digit;
  int temp,i;   
  while(scanf("%d",&n)!=EOF){
    a[0]=1;digit=1;
    for(i=2; i<=n; i++)
      {
        for(carry=0,j=1; j<=digit; ++j)
	  {
            temp=a[j-1]*i+carry;
            a[j-1]=temp%10;
            carry=temp/10;
	  }
        while(carry)
	  {
            //digit++;
            a[++digit-1]=carry%10;
            carry/=10;
	  }
      }
    int k;
    for(k=digit; k>=1; --k)
      printf("%d",a[k-1]);
    printf("\n");
    printf("length=%d\n",digit);
  }
  return 0;
}
