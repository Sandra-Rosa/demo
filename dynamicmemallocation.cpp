/* program to demonstrate new and delete*/
#include <iostream>
using namespace std;
int main()
{
int *p;
float *q;
char *r;

p=new int(10);//allocates 2 bytes and the pass the address to p
q=new float(1.5);//allocates 4 bytes and the pass the address to q
r=new char('x');//allocates 1 bytes and the pass the address to r

cout<<"*p="<<*p<<" *q="<<*q<<" *r="<<*r<<endl;;
delete p;// release the memory allocated to p 
cout<<"*p="<<*p<<" *q="<<*q<<" *r="<<*r<<endl;;
return 0;
}