#define MAXLEN 100000
#define MAXSUM 1000000
#include <stdio.h>
#include <math.h>
main()
{
  int i,j,k,n,sum,s;
  int a[MAXSUM];
  for(i=0;i<MAXSUM;i++)
      a[i]=0;
      a[0]=1;
      for(i=1;i<=MAXLEN;i++)
	{
	  for(j=MAXSUM-1;j>=0;j--)
	    {
	      if(a[j]!=0)
		{
		  n=j+1;
		  break;
		}
	      for(k=0;k<n;k++)
		{
		  a[k]=a[k]*i;
		  for(k=0;k<n;k++)
		    {
		      sum=a[k];
		      if(sum/100>0)
			{
			  a[k]=sum%100;
			  a[k+1]=a[k+1]+sum/100;
			}
		    }
		  for(s=n;s>=0;s--)
		    {
		      if(a[s]>=10)
			printf("%d",a[s]);
		      else printf("0%d",a[s]);
		      printf("\n");
		    }
		  
