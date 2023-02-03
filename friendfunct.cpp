#include <iostream>
using namespace std;
class demo
{
  private:
  int a=5;
  friend void display(demo);//friend function declaration
};
void display(demo d)//friend function defination
{
  cout<<"a: "<<d.a<<endl;//access of private data
}
int main()
{
  demo d;
  display(d);//calling a friend function
return 0;
}
