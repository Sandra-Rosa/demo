#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=i;
        int count1=2;
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<count<<" ";
            count--;
        }
        for(int k=2;k<=i;k++){
            cout<<count1<<" ";
            count1++;
        }
        cout<<endl;
    }
    return 0;
}