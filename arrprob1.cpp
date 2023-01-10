#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx = arr[0];
    for(int i=0;i<n;i++){
       mx = max(mx,arr[i]);
       cout<<mx<<" "; 
    }
    return 0;
}