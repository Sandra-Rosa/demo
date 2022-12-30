#include<iostream>
#include<cmath>
using namespace std;
int convert(long long n){
    int rem,i=0,ans=0;
    while(n!=0){
        rem=n%10;
        n=n/10;
        ans=ans+rem*pow(2,i);
        i++;
    }
    return ans;
}
int main(){
    long long n;
    cout<<"Enter the binary number ";
    cin>>n;
    cout<<convert(n);
    return 0;
}