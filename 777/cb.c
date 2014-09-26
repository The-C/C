#include <stdio.h>
#include<ctype.h> 
void main(){
  char str[]="12376543456@#FDsP[e?";
  int i;  
  for(i=0;str[i]!=0;i++)  
    if(isdigit(str[i])) 
      printf("%c is an digit character\n",str[i]); 
} 
