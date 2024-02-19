#include <iostream>
#include <string>

class Animal {
  protected:
    string color;
    string name;
    int age;
};

class Snake : public Animal {
  private:
    float length;
  public:
    Snake(std::string _string, std::string _name, int age, float length) : Animal(_color, _name, age), length(_length) {}
    void MakeSound() { 
      std::cout<<"Hisss! Hisss! \n";
    }
};

class Cat : public Animal {
  private: 
    float height;
  public:
    Cat( std::string _color, std::string _name, int age, float height) : Animal(_color, _name, _age), height(_heigt) {}
    void MakeSound() {
      std::cout<<"Meow! Meow!";
    }
};

int main() {
  Snake snake("Gray", "Python", 5, 4.5);
  Cat cat("Orange", "Puss", 3, 10);
  
  std::cout<<"Snake " <<snake.name <<" says:" <<std::endl;
  snake.MakeSound();

  std::cout<<"Cat " <<cat.name <<" syas:" <<std::endl;
  cat.MakeSound();

  return 0;



}

