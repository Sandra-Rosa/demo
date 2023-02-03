#include <iostream>
using namespace std;

class Rect {
  public:
    int len;
    int breadth;

    int calculateArea() {
      return len * breadth;
    }
};

int main(){
    
    Rect obj;
    
    obj.len = 10;
    obj.breadth = 20;
    
    cout << "Area: " << obj.calculateArea();
}