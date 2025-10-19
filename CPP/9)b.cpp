#include <iostream> 
using namespace std; 
class Animal { 
public: 
 virtual void makeSound() { 
 cout << "Animal makes a sound" << endl; 
 } 
}; 
class Lion : public Animal { 
public: 
 void makeSound() override { 
 cout << "Lion roars" << endl; 
 } 
}; 
class Cat : public Animal { 
public: 
 void makeSound() override { 
 cout << "Cat meows" << endl; 
 } 
}; 
int main() { 
 cout<<"Roll no:24B11AI104"<<endl; 
 Animal* animalPtr; 
 Lion l; 
 Cat c;
 animalPtr = &l; 
 animalPtr->makeSound(); 
 animalPtr = &c; 
 animalPtr->makeSound(); 
 return 0; 
}

