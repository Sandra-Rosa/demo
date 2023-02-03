#include <iostream>
using namespace std;
int main()
{
 int i = 10; 
 char c = 'a'; 
 float f=1.1;
 f = f + i ;
 //i get converted to float type from integer type.

 i = i + c;
 //c get converted to int type from char type i.e. to equivalent ASCII value of 'a' i.e. 97

 cout<<"Value of i = "<< i << endl;
 cout<<"Value of c = "<< c << endl;
 cout<<"Value of f = "<< f << endl;
 return 0;
}