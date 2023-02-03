//subarray with given sum
#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,s;
    cout<<"Enter the number of elements of the array ";
    cin>>n;
    cout<<"Enter the given sum ";
    cin>>s;
    int arr[n];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=0,i=0;
    int str=-1,end=-1;
    int sum =0;
    while(j<n && sum+arr[j]<=s){
        sum +=arr[j];
        j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n){
        sum +=arr[j];
        while(sum >s){
            sum -=arr[i];
            i++;
        }
        if(sum ==s){
            str=i+1;
            end=j+1;
            break;
        }
        j++;
    }
    cout<<str<<" "<<end;
    return 0;
}