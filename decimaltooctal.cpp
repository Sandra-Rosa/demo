#include<iostream>
using namespace std;
int decimaltooctal(int n){
    int ans=0,x=1,lastdigit;
    while(x<=n){
        x=x*8;
    }
    x=x/8;
    while(x>0){
        lastdigit = n/x;
        n = n-x*lastdigit;
        x=x/8;
        ans = ans*10+lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number ";
    cin>>n;
    cout<<decimaltooctal(n)<<endl;
    return 0;
}