#include <stdio.h>

int main()
{

  int a=1;
 fgh:;
  if(a<=100){
    if(a%10==7 || a%7==0)
      printf("%d  ",a);
  a++;
  goto fgh;
  }
  printf("\n");
  return 0;
}
