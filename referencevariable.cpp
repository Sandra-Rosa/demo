#include <iostream>
using namespace std;
int main()
{
  int a=10;
  int &b=a;//b is alias of a 
  int &c=b;//c is alias of b
  cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
  c=20;//a,b also becomes 20
  cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
  cout<<"&a:"<<&a<<" &b:"<<&b<<" &c:"<<&c<<endl;//a,b,c has same address
  return 0;
}