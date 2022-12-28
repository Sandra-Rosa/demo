#include <iostream>
using namespace std;
int main(){
    int a,b,num,i;
    cout<<"Enter the lower limit";
    cin>>a;
    cout<<"Enter the higher limit";
    cin>>b;
    for(num=a;num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
        cout<<num<<" ";
    }
    }
    
    return 0;
}