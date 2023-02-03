#include <iostream>
#include <string.h>
using namespace std;

struct student  //student as structure name
{
  int id;
  char name[20];
  float marks,attendance;
};//no memory allocated as of now

int main()
{

  struct student s1 = {66,"Ronaldo",75.0,50.0};  //memory allocated 
  struct student s2;  //memory allocated now
  struct student s3;  //memory allocated now

  //Method 2 of initialisation
  cout << "Enter Student ID for S2:" << endl;
  cin >> s2.id;

  cout << "\nEnter Student Name for S2:" << endl; 
  cin >> s2.name;

  cout << "\nEnter Marks for S2:" << endl;
  cin >> s2.marks;

  cout << "\nEnter attendance for S2:" << endl; 
  cin >> s2.attendance;

  //Method 3 of initilisation
  s3.id = 36;
  s3.marks = 79;
  strcpy(s3.name, "Neymar");
  s3.attendance = 200;

  //acessing structure members
  cout << "\n\nDetails of Student 1:\n";

  cout << "Name: " << s1.name << "\nID: "
  << s1.id << "\nMarks: "<< s1.marks << "\nAttendance: " << s1.attendance;

  return 0;
}