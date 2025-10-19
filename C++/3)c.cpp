#include <iostream>
#include <cstdlib>
using namespace std;
class Student
{
private:
 int rollNo;
 string name;
public:

 void setData(int rollNo, string name)
 {
 this->rollNo = rollNo;
 this->name = name;
 }void display() {
 cout << "Roll No: " << rollNo << endl;
 cout << "Name: " << name << endl;
 }
};
int main()
{
 Student s1;
 s1.setData(104, “vasavi");
 s1.display();
 return 0;
}
