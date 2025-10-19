#include <iostream>
#include <cstdlib>
using namespace std;
inline int square(int x)
{
 return x * x;
}
int main()
{
 int num = 6;
 cout << "Square of " << num << " is " << square(num) << endl;
 return 0;
}
