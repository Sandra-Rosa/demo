#include<iostream>
using namespace std;
int main(){
    //post-increment
    int a=10;
    int b,c;
    b=a++;
    cout<<b<<endl;
    //pre-increment
    int d=10;
    c=++d;
    cout<<c<<endl;
    return 0;
}