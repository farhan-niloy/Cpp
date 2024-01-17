#include <iostream>
#include <vector>

class Shape{    //Abstract Base Class
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape(){}

};
class Open_Shape: public Shape{
public:
    virtual ~Open_Shape(){}
};

class CLosed_Shape: public Shape{
public:
    virtual ~CLosed_Shape(){}
};

class Line:public Open_Shape{
    virtual void draw() override{
        std::cout<<"Drawing a Line" <<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating a Line" <<std::endl;
    }
    virtual ~Line(){}
};

class Circle: public CLosed_Shape {
public:
    virtual void draw() override{
        std::cout<<"Drawing a Circle" <<std::endl;
    }
    virtual void rotate() override{
        std::cout<<"Rotating a Circle" <<std::endl;
    }
    virtual ~Circle(){}
};

class Square: public CLosed_Shape{
public:
    virtual void draw() override {
        std::cout<<"Drawing a Square" <<std::endl;
    }
    virtual void rotate() override {
        std::cout<<"Rotating a Square" <<std::endl;
    }
    virtual ~Square(){}
};


int main() {
//    Shape s;
//    Shape *p = new Shpae();


//      Shape *ptr = new Circle();
//      ptr->draw();
//      ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1,s2,s3};

    return 0;
}
