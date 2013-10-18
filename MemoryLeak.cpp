
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void printValue(int *);

int main(void) {
  srand(time(NULL));

  int *someValue = new int;

  for (int i = 0; i < 100; i++) {
    *someValue = rand() % 100;
    printValue(someValue);
  }

  delete someValue;
  someValue = NULL;
}

void printValue(int *value) {
  int *anotherValue = new int;
  *anotherValue = *value + 10;
  cout << *value << " + 10 = " << *anotherValue << endl;
}
