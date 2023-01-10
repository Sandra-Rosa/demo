#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int maxno=array[1],minno=array[1];
    for(int i=0;i<n;i++){
        if(array[i]>maxno){
            maxno = array[i];
        }
        if(array[i]<minno){
            minno = array[i];
        }
    }
    cout<<maxno<<endl<<minno<<endl;
    return 0;
}