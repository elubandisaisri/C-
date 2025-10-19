#include <iostream> 
#include <map> 
using namespace std; 
int main() { 
 map<int, string> students; 
 cout << "=== MAP OPERATIONS ===" << endl; 
 students[001] = "STEVE"; 
 students[002] = "ELEVEN"; 
 students[003] = "MAX"; 
 students.insert({004, "NANCY"}); 
 cout << "Students after insertion:" << endl; 
 for (auto x : students) 
	 cout << "Roll No: " << x.first << " Name: " << x.second << endl; 
 cout << "\nAccess element with key 002: " << students[002] << endl; 
 int key = 003; 
 auto it = students.find(key); 
 if (it != students.end()) 
	 cout << "Found student with Roll No " << key << ": " << it->second << endl; 
 else 
 cout << "Student with Roll No " << key << " not found!" << endl; 
 students.erase(001); 
 cout << "\nAfter deleting key 001:" << endl; 
 for (auto x : students) 
	 cout << "Roll No: " << x.first << " Name: " << x.second << endl; 
	 cout << "\nTotal students: " << students.size() << endl; 
	 return 0; 
} 


