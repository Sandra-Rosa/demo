#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"Enter the third number"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the largest number"<<endl;
        }
        else{
            cout<<c<<" is the largest number"<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" is the largest"<<endl;
        }
        else{
            cout<<c<<" is the largest"<<endl;
        }
    }
    return 0;
}