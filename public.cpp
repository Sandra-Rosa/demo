#include <iostream>
using namespace std;

class Rectangle{
    
    // all below declared under public
  public: 
    int length, breadth;

    int area(){
        return length * breadth;
    }
};

int main(){
    Rectangle rect1;
    
    // can be accessed outside the class
    rect1.length = 10;
    rect1.breadth = 20;
    
    cout << "Area is: " <<   rect1.area();
    return 0;
}