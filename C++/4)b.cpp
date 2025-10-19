#include<iostream>
#include<cstdlib>
using namespace std;
class DispDemo
{
public:
 void display()
 {
 cout << "Nothing to display" << endl;
 }
 void display(string msg)
 {
 cout << "I am having something to display:" << msg << endl;
 }
 void display(int age)
 {
 cout << "Age:" <<age << endl;
 }
 void display(string msg,int age)
 {
 cout << "Hello" << msg <<"Age:" <<age << endl;
 }
 int display(int age, int grace)
 {return (age+grace);
 }
 void show(int c,int a = 20,int b = 30)
 {
 cout << "A:" << a <<" B:" <<b << " C:" << c<< endl;
 }
};
int main()
{
 DispDemo dd;
 dd.display(20);
 dd.display();
 dd.display("Welcome to C++ programming");
 dd.display("Vaishnavi",18);
 cout << " Result:" << dd.display(15, 5) << endl;
 dd.show(40);
 dd.show(600, 100);
 return 0;
}
