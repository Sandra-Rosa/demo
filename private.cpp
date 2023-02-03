#include <iostream>
using namespace std;

class Rectangle{ 
  
  // these are a private 
  private: 
    int length, breadth;

  // these are public
  public: 
  
    // area is a member function of the class thus
    // can access private data members
    int area(){ 
        return length * breadth;
    }
};

int main()
{ 
    Rectangle rect1;
    
    // Error 
    // trying to access private member outside class
    // rect1.length = 10;
    // rect1.breadth = 20;

    // public member can be accessed 
    cout << "Area is:" << rect1.area();
    
    return 0;
}