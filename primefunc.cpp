#include<iostream>
#include <cmath>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0 || num==1){
        return false;
        }

    }
    return true;
}
int main(){
    int a,b;
    cout<<"Enter the lower limit ";
    cin>>a;
    cout<<"Enter the higher limit ";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}