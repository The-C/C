#include <stdio.h>

int main(){

  int a=1,b=1,c=1;
    while(b<=9){
      for(a=1;a<=b;a++){
	  for(b=1;b<=a;b++){
	    
	    printf("%dx%d=%d\t",b,a,c=a*b);
	    
	  }
	printf("\n");
      }
    }
  return 0;
}
