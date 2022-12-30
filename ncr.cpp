#include<iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n in nCr";
    cin>>n;
    cout<<"Enter r in nCr ";
    cin>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}
