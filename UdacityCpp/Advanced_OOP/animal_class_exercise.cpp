#include <iostream>
#include <string>

class Animal {
protected:
    std::string color;
    std::string name;
    int age;
public:
    Animal(std::string _color, std::string _name, int _age) : color(_color), name(_name), age(_age)  {}
    std::string Name() const { return name; }
};

class Snake : public Animal {
private:
    float length;

public:
    Snake(std::string _color, std::string _name, int _age, float _length)
        : Animal(_color, _name, _age), length(_length) {}

    void MakeSound() {
        std::cout << "Hisss! Hisss! \n";
    }
};

class Cat : public Animal {
private:
    float height;

public:
    Cat(std::string _color, std::string _name, int _age, float _height)
        : Animal(_color, _name, _age), height(_height) {}

    void MakeSound() {
        std::cout << "Meow! Meow! \n";
    }
};

int main() {
    Snake snake("Gray", "Python", 5, 4.5);
    Cat cat("Orange", "Puss", 3, 10);

    std::cout << "Snake " << snake.Name() << " says: " << std::endl;
    snake.MakeSound();

    std::cout << "Cat " << cat.Name() << " says: " << std::endl;
    cat.MakeSound();

    return 0;
}

