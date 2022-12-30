#include<iostream>
#include<cmath>
using namespace std;
int convert(int n){
    int rem,ans=0,i=0;
    while(n!=0){
        rem = n%10;
        n=n/10;
        ans = ans+rem*pow(8,i);
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the octal number ";
    cin>>n;
    cout<<convert(n);
    return 0;
}