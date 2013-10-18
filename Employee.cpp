#include <iostream>
#include <string>

using namespace std;

class Employee {
  string firstName;
  string lastName;
  int employeeNumber;
  int ssn;
  string department;

public:
  Employee(string firstName, string lastName,
           int employeeNumber, int ssn, string department) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->employeeNumber = employeeNumber;
    this->ssn = ssn;
    this->department = department;
  }

  Employee() {
    employeeNumber = -1;
    ssn = -1;
    department = -1;
  }

  string getFirstName() {
    return firstName;
  }

  string getLastName() {
    return lastName;
  }

  int getSSN() {
    return ssn;
  }

  string getDepartment() {
    return department;
  }

  void setFirstName(string name) {
    // if the argument has a different name,
    // you don't need this->
    firstName = name;
  }

  // ...
};


int main(void) {
  Employee *emp = new Employee("Layne", "Pedersen",
                              123, 123456789, "Physics");

  cout << "Hello " << emp->getFirstName()
       << " " << emp->getLastName()
       << " you work in the "
       << emp->getDepartment() << " department\n";
  delete emp;
  emp = NULL;
}


