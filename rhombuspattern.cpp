#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    for(int i=1;i<=n;i++){
        int space = n-i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int i=1;i<=n;i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}