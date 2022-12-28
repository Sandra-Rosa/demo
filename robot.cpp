#include<iostream>
using namespace std;
int main(){
    char button;
    int n=2;
    while(n!=0){
    cout<<"Enter a button";
    cin>>button;
    switch (button)
    {
    case 'A':
        cout<<"Hello"<<endl;
        break;
    case 'B':
         cout<<"Namste"<<endl;
         break;
    case 'C':
        cout<<"Hola"<<endl;
        break;
    case 'D':
        cout<<"Salut"<<endl;
        break;
    case 'E':
        cout<<"Ciao"<<endl;
        break;
    default:
        cout<<"Invalid option"<<endl;
        break;
    }}
    return 0;
}