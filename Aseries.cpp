#include<iostream>
using namespace std;
int sum(int num){
    int ans=(num*(num+1)/2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<sum(n);
    return 0;
}