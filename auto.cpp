#include <iostream>
using namespace std;

void demo()
{
    auto a = 10; //auto variable
    
    // below is also auto as variables are have auto storage type by default
    // int a = 10; // auto variable
    
    ++a;

    cout << "a is " << a << "\n";
}
int main()
{
    demo(); //creates 'a' and destroys that memory
    demo(); //creates a new 'a' and destroys that memory
}