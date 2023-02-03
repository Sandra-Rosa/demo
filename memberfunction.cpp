#include <iostream> 
using namespace std;

class Cube {
    public:
        // member variables
        double len;
        double breadth;
        double height;
        
        // member function declared and defined
        // inside class
        double getVolume(){
            return len * breadth * height;
        }
        
        // setters : to set values declared and defined 
        // inside class
        void setLen(int l){
            len = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        void setHeight(int h){
            height = h;
        }
};

int main(){
    Cube cube_obj1;
    
    cube_obj1.setLen(10.0);
    cube_obj1.setBreadth(10.0);
    cube_obj1.setHeight(10.0);
    
    cout << "The Volume : " << cube_obj1.getVolume();
}