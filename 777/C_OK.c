#include  
#include  
char format[] = "%s %s\n"; 
char hello[] = "Hello"; 
char world[] = "world"; 
HWND hwnd; 
void main( void ) 
{ 
   __asm 
     { 
       //push NULL 
       //call dword ptr GetModuleHandle 
       //mov hwnd,eax 
        push MB_OK 
	  mov eax, offset world 
      push eax 
	  mov eax, offset hello 
      push eax 
	  push 0//说明此处不能将前面注释掉代码处得到的hwnd压栈，否则对话框弹不出来。 
        call dword ptr MessageBox 
	  } 
} 
