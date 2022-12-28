#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Type " << endl
         << "A for addition" << endl
         << "S for substraction" << endl
         << "M for multiplication" << endl
         << "D for division" << endl;
    cin >> op;
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    switch (op)
    {
    case 'A':
        cout << a + b << endl;
        break;
    case 'S':
        cout << a - b << endl;
        break;
    case 'M':
        cout << a * b << endl;
        break;
    case 'D':
        cout << a / b << endl;
        break;
    default:
        cout << "Invalid option" << endl;
        break;
    }
    return 0;
}