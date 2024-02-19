#include <iostream>

#define PI 3.14159

class LineSegment {
  private:
    double length;

  public:
    LineSegment(double len) : length(len) {}

    double GetLength() const {
      return length;
    }
};

class Circle {
  private:
    LineSegment radius;

  public:
    Circle(double r) : radius(r) {}

    double Area() const {
    double r = radius.GetLength();
    return PI * r * r;
    }
};

int main() {
  Circle circle(5.0);

  std::cout<< "Area of the Circle: " << circle.Area() << std::endl;

  return 0;
}
