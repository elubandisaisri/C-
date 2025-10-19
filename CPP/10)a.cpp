#include<iostream> 
using namespace std; 
template<typename T> 
T mymax(T x, T y) { 
			 return (x > y) ? x : y; 
} 
template<typename T> 
void swapValues(T &a,T&b) { 
			 T temp = a; 
			 a = b; 
			 b = temp; 
} 
int main() { 
	 cout<<"Rollno:24B11AI104"<<endl; 
	 cout << "Max of 3 and 7: " << mymax<int>(3, 7) << endl; 
	 cout << "Max of 3.0 and 7.0: " << mymax<double>(3.0, 7.0) << endl; 
	 cout << "Max of 'g' and 'e': " << mymax<char>('g', 'e') << endl; 
	 int a = 100, b = 200; 
	 cout << "\nBefore swap : a = " << a << ", b = " << b << endl; 
			 swapValues(a, b); 
cout << "After swap : a = " << a << ", b = " << b << endl; 
				 double c = 7.4, d = 98.1; 
 cout << "\nBefore swap : c = " << c << ", d = " << d << endl; 
		 swapValues(c, d); 
		 cout << "After swap : c = " << c << ", d = " << d << endl; 
			 char e = 'S', f = 'T'; 
			 cout << "\nBefore swap : e = " << e << ", f = " << f << endl; 
swapValues(e, f); 
 cout << "After swap : e = " << e << ", f = " << f << endl; 
 return 0; 
} 

