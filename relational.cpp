#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number"<<endl;
    cin >> n;
    if(n>10){
        cout<<n<<" is more than ten!";
    }
    else if(n<10){
        cout<<n<<" is less than ten";
    }
    else{
        cout<<n<<" is equal to ten";
    }
    return 0;
}
