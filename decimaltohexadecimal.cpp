#include<iostream>
using namespace std;
string decimaltohexadecimal(int n){
    int x=1,lastdigit;
    string ans;
    while(x<=n){
        x=x*16;
    }
    x=x/16;
    while(x>0){
        lastdigit = n/x;
        n = n-x*lastdigit;
        x=x/16;
        if(lastdigit<=9){
            ans = ans+to_string(lastdigit);
        }
        else{
            char c = 'A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal value ";
    cin>>n;
    cout<<decimaltohexadecimal(n)<<endl;
    return 0;
}