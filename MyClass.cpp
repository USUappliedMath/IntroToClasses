#include <iostream>

using namespace std;

class MyClass {
  int data;

public:
  // constructors
  MyClass(); // default constructor
  MyClass(int);

  // deconstructor
  ~MyClass();

  void setData(int);
  void printData();
};

MyClass::MyClass() {
  cout << "hello. initializing to zero\n";
  this->data = 0;
}

MyClass::MyClass(int data) {
  cout << "hello. initializing to: " << data << endl;
  this->data = data;
}

~MyClass() {
  cout << "goodbye\n";
}

void MyClass::setData(int data) {
  this->data = data;
}

void MyClass::printData() {
  cout << data << endl;
}

int main() {
  MyClass myClass;

  myClass.printData();
  myClass.setData(17);
  myClass.printData();

  // initialize with constructor
  MyClass myClass2(10);
  myClass2.printData();
}
