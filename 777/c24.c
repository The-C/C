#include<conio.h> 
#include<stdio.h> 
main() 
{ 
  struct text_info r; 
  int col=16,row=6; 
 char *info1="            
char *info2="                            
char *info3="                            
char *info4="                            
char *info5="                            
char *info6="                            
char *info7="  
char block[10000]; 
 gettextinfo(&r); 
 gettext(col,row,col+68,row+3,block); 
 textcolor(BLACK); 
 textbackground(GREEN); 
 window(col+1,row+1,col+68,row+8); 
 clrscr(); 
 textbackground(RED); 
 window(col,row,col+70,row+10); 
 clrscr(); 
 gotoxy(22,8); 
 puts("_______________________________________"); 
 gotoxy(22,6); 
 puts("|"); 
 gotoxy(22,8); 
 puts("|"); 
 gotoxy(60,6); 
 puts("|"); 
 gotoxy(60,8); 
 puts("|"); 
 gotoxy(23,5); 
 puts("_____________________________________"); 
 gotoxy(12,7); 
 textcolor(WHITE); 
 cputs(info1); 
 textcolor(GREEN); 
 gotoxy(1,11); 
 cputs(info2); 
 gotoxy(1,12); 
 cputs(info3); 
 gotoxy(1,13); 
 cputs(info4); 
 gotoxy(1,14); 
 cputs(info5); 
 gotoxy(1,18); 
 cputs(info6); 
 gotoxy(1,19); 
 cputs(info7); 
 getch(); 
 window(r.winleft,r.wintop,r.winright,r.winbottom); 
 puttext(col,row,col+71,row+9,block); 
}                         
