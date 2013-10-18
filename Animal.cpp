#include <string>
#include <iostream>

using namespace std;

class Animal {
protected:
  string name;
  string sound;
  string color;

public:
  Animal(string name, string sound, string color) {
    this->name = name;
    this->sound = sound;
    this->color = color;
  }

  virtual void print() {
    cout << "I am an animal\n";
  }

  bool operator == (const Animal &animal) {
    if (name == animal.name &&
        sound == animal.sound &&
        color == animal.color) {
      return true;
    } else {
      return false;
    }
  }
};


class Dog : public Animal {
public:
  Dog(string name, string sound, string color)
    : Animal(name,sound,color) {}

  void print() {
    cout  << "I am a dog and my name is " << name
          << " and the sound I make is \"" << sound << "\""
          << " and my color is " << color << endl;
  }
};

class Cat : public Animal {
public:
  Cat(string name, string sound, string color)
    : Animal(name,sound,color) {}

  void print() {
    cout  << "I am a cat and my name is " << name
          << " and the sound I make is \"" << sound << "\""
          << " and my color is " << color << endl;
  }
};


int main(void) {
  Dog dog("Jack", "bark", "black");
  Cat cat("Siddhartha", "meow", "black and white");

  dog.print();
  cat.print();

  if (dog == cat) {
    cout << "they are the same\n";
  } else {
    cout << "they are not the same\n";
  }

  Dog dog2("Jack", "bark", "black");

  if (dog == dog2) {
    cout << "they are the same\n";
  } else {
    cout << "they are not the same\n";
  }
}
