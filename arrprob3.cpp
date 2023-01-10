//largest arithmetic subarray
#include <iostream>
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
    int ans=2;
    int pd=arr[1]-arr[0];
    int curr=2;
    int j=2;
    while(j<n){
        if(pd==arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j] - arr[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<"Output"<<endl<<ans;
    return 0;
}