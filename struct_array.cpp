#include <iostream>
using namespace std;
struct student 
{ 
  int roll_no; 
  string name; 
  int phone_number;
};

int main()
{
  struct student stud[5];  //array of structure variables
  int i;

  for(i = 0; i < 5; i++)
  { 
    //taking values from user
    cout << "Student " << i + 1 << endl;
    
    cout << "Enter roll no: " << endl; cin >> stud[i].roll_no;
    
    cout << "Enter name: " << endl; cin >> stud[i].name;
    
    cout << "Enter phone number: " << endl; cin >> stud[i].phone_number;
  }

  for(i = 0; i < 5; i++)
  { 
    //printing values
    cout << "\nStudent " << i + 1 << endl;

    //accessing struture members
    cout << "\nRoll no : " << stud[i].roll_no << endl;
    cout << "Name : " << stud[i].name << endl;
    cout << "Phone no : " << stud[i].phone_number << endl;
  }
  return 0;
}