#include <iostream>
#include <string>

class Animal {
protected:
    std::string color;
    std::string name;
    int age;
};

class Snake : public Animal {
private:
    float length;

public:
    // Corrected parameter names in constructor
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
    // Corrected parameter names in constructor
    Cat(std::string _color, std::string _name, int _age, float _height)
        : Animal(_color, _name, _age), height(_height) {}

    void MakeSound() {
        std::cout << "Meow! Meow! \n";
    }
};

int main() {
    Snake snake("Gray", "Python", 5, 4.5);
    Cat cat("Orange", "Puss", 3, 10);

    std::cout << "Snake " << snake.name << " says: " << std::endl;
    snake.MakeSound();

    std::cout << "Cat " << cat.name << " says: " << std::endl;
    cat.MakeSound();

    return 0;
}

