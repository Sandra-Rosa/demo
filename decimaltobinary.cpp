#include<iostream>
using namespace std;
int decimaltobinary(int n){
    int ans=0,x=1,lastdigit;
    while(x<=n){
        x=x*2;
    }
    x=x/2;
    while(x>0){
        lastdigit = n/x;
        n=n-x*lastdigit;
        x=x/2;
        ans = ans*10+lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number ";
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
    return 0;
}