#include <iostream>
using namespace std;
int lice(int *a,int *b)
{   return *a+*b;}
int strong(int *a,int *b)
{   return *a-*b;}
int tiantang(int *a,intb)
{   return (*a)++;}
int leeice(int *a,int *b)
{   return (*b)++;}
int main()
{   cout<<"输入两个整数a b(中间用空格分割)"<<endl;
  cin>>a;
  cin>>b;
  cout<<"a+b="<<lice(&a,&b)<<endl;
  
  cout<<"a-b="<<strong(&a,&b)<<endl;
  cout<<"a自加="<<tiantang(&a,&b)<<endl;
  cout<<"b自加="<<leeice(&a,&b)<<endl;
  return 0;
}
