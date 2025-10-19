#include <iostream> 
#include <list> 
#include <vector> 
using namespace std; 
int main() { 
 cout << "=== VECTOR OPERATIONS ===" << endl; 
 vector<int> v; 
 v.push_back(1); 
 v.push_back(2); 
 v.push_back(3); 
 cout << "Vector elements after insertion: "; 
 for (int x : v) 
	 cout << x << " "; 
 v.pop_back(); 
 cout << "\nVector after deletion: "; 
 for (int x : v) 
	 cout << x << " "; 
 cout << "\nFirst element: " << v.front(); 
 cout << "\nLast element: " << v.back() << endl; 
 cout << "\n=== LIST OPERATIONS ===" << endl; 
 list<int> lst; 
 lst.push_back(200); 
 lst.push_back(300); 
 lst.push_front(100); 
 cout << "List elements after insertion: "; 
 for (int x : lst) 
	 cout << x << " "; 
 lst.pop_front(); 
 cout << "\nList after deletion: "; 
 for (int x : lst) 
	 cout << x << " "; 
 cout << "\nList traversal using iterator: "; 
 for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) 
	 cout << *it << " "; 
 cout << endl; 
	 return 0; 
} 


