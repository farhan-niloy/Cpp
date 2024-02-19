#include <iostream>

class Point {
  private:
    int x;
    int y;

  public:
    Point( int _x, int _y) : x(_x), y(_y) {}

    Point operator+(const Point &other) const {
      return Point(x + other.x, y + other.y); // new point object
    }

    void display() const { 
      std::cout << "Point (" << x <<", " << y << ")" << std::endl;
    }
  
};

int main () {
  Point p1(2, 3);
  Point p2(5, 6);

  Point p3 = p1 + p2;

  std::cout<< "Result of addition: ";
  p3.display();

  return 0;
}
