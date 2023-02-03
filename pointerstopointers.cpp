#include <iostream>
using namespace std;
int main() 
{
  int a = 25;
  
  int *p = &a;			//normal pointer
  int **p2 = &p;		//double pointer stores pointer address i.e p's addres
  int ***p3 = &p2;		//triple pointer stores address of double pointer i.e p3's address
  cout << "a value is :" << a << endl;
  
  cout << "a value using p:" << *p << endl;
  
  cout << "a value using p2:" << **p2 << endl;
  
  cout << "a value using p3:" << ***p3 << endl;
  
return 0;
}
