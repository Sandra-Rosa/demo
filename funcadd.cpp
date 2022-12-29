#include <iostream>
using namespace std;
int addition(int a, int b){
    int sum = a+b;
    return sum;
}
int main(){
    int m,n;
    cout<<"Enter the first number ";
    cin>>m;
    cout<<"Enter the second number ";
    cin>>n;
    int sum = addition(m,n);
    cout<<sum;
    return 0;
}