#include <iostream>
using namespace std;
int main() 
{
  
  int a = 20;
  
  int *ptr;			//pointer declartion
  ptr = &a;			//pointer initilisation
  cout << "value of a:" << a << endl;	// gives 20 i.e a's value
  cout << "address of a:" << &a << endl;	//a's address
  cout << "value of *ptr:" << *ptr << endl;	//pointing to address of 'a' i.e gives value at a's adress
  cout << "value of *&a:" << *(&a) << endl;	//* ptr is interpreteed as *&a
  cout << "value of ptr:" << ptr << endl;	// ptr gives a's adress as it is initialised with a's adress
  cout << "address of ptr:" << &ptr << endl;	//gives ptr adress 
  return 0;

}