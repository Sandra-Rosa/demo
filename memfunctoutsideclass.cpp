#include <iostream>
using namespace std;

class Cube {
    public:
        // member variables
        double len;
        double breadth;
        double height;
        
        // member function declared inside 
        // but defined outside
        double getVolume();
        void setLen(int l);
        void setBreadth(int b);
        void setHeight(int h);
};
double Cube::getVolume(){
    return len * breadth * height;
}
        
// all class's members functions
// defined outside the class with scope resolutor ::
void Cube::setLen(int l){
    len = l;
}
void Cube::setBreadth(int b){
    breadth = b;
}
void Cube::setHeight(int h){
    height = h;
}

int main(){
    Cube cube_obj1;
    
    cube_obj1.setLen(10.0);
    cube_obj1.setBreadth(10.0);
    cube_obj1.setHeight(10.0);
    
    cout << "The Volume : " << cube_obj1.getVolume();
}