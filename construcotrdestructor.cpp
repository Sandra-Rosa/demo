#include <iostream>
using namespace std;

class myClass
{
    public:
    myClass(){
        cout << "Constructor called" << endl;
    }
    
    ~myClass(){
        cout << "Destructor called" << endl;
    }
};

int main()
{
    myClass obj1; // Constructor Called for obj1
    
    int x = 1;
    
    if(x){
        myClass obj2; // Constructor Called for obj2
        
    } // Destructor Called for obj2 as obj2 out of scope
    
    return 0;
}// Destructor called for obj1 as obj1 out of scope