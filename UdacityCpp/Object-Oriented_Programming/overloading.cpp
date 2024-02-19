#include <iostream> 

void hello() {
  std::cout << "Hello, World!" << std::endl;
}

class Human {};

void hello( Human human) {
  std::cout << "Hello! Human!" << std::endl;
}

class Dog {};

void hello(Dog dog) {
  std::cout << "Hello, Dog!" << std::endl;
}

int main () {
  hello();

  Human person;;
  hello(person);

  Dog dog;
  hello(dog);

  return 0;
}
