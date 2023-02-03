#include <iostream>
using namespace std;

class parent//parent class
{
  public:
  virtual void show()
  {
    cout << "Base class\n";
  }
};

class child:public parent//child class
{
  public:  void show()
   {
     cout << "Derived Class";
   }
};

int main()
{
  parent* p; //Base class pointer
  child c; //Derived class object
  p = &c;
  c.show(); //Late Binding Occurs
}