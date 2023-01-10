#include<iostream>
using namespace std;
int binarysearch(int arr[], int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enetr the number of elements of the array ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array in ascening order ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"Enter the key to be found ";
    cin>>key;
    cout<<binarysearch(array,n,key);
    return 0;
}