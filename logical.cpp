#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    if(num%2==0 && num%3==0){
        cout<<num<<" is divisible by 2 and 3";
    }
    else if(num%2==0 || num%3==0){
        cout<<num<<" is divisible by 2 or 3";
    }
    else{
      cout<<num<<" is not divisible by 2 or 3";
    }
    return 0;
}