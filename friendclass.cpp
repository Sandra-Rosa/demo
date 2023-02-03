#include<iostream>
using namespace std;
class test1
{
  int a,b;
  public:
  void get()
  {
   cout<<"enter 2 integers";
   cin>>a>>b;
  }
  friend class test2;//defining friend class
};
class test2
{
   test1 t1;
   public:
   void put()
  {
      t1.get();
      cout<<"a: "<<t1.a<<endl;
       cout<<"b: "<<t1.b<<endl;
   }
};
main()
{
    test2 t2;
    t2.put();
}