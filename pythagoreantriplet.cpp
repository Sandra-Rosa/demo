#include <iostream>
using namespace std;
bool check(int num1, int num2, int num3)
{
    bool flag;
    int a = max(num1, max(num2, num3));
    int b;
    int c;
    if (a == num1)
    {
        b = num2;
        c = num3;
    }
    else if (a == num2)
    {
        b = num1;
        c = num3;
    }
    else
    {
        b = num1;
        c = num2;
    }
    if(a*a==b*b+c*c){
        flag = true;
    }
    else{
        flag=false;
    }
    return flag;
}
int main()
{
    int a, b, c;
    cout << "Enter a b and c";
    cin>>a>>b>>c;
    if (check(a, b, c))
    {
        cout << "Pythagorean triplets";
    }
    else
    {
        cout << "Not pythagorean triplets ";
    }
    return 0;
}