#include <iostream>
#include <cstdlib>
using namespace std;int b = 350;
namespace N1
{
 int a = 200;
}
namespace N2
{
 int a = 10;
}
void fun()
{
 int a = 10;
 cout << "Fun A : " << a << " " << ::b << endl;
}
int main()
{

 {
 int a = 10;
 cout << "Inner A : " << a << endl;
 }
 cout << "Outer B : " << b << endl;
 fun();

 cout << "Name space 1 : " << N1::a << endl;
 cout << "Name space 2 : " << N2::a << endl;
 return 0;
}

