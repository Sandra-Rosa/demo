#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter th number of elements in the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    cout<<"Output ";
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}