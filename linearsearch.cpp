#include <iostream>
using namespace std;
int linearsearch(int array[], int n, int key){
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int n,flag=0,i;
    cout<<"Enter the number of elements in the array ";
    cin>>n;
    cout<<"Enter the elements of the array ";
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int key;
    cout<<"Enter the element to be found ";
    cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;
}