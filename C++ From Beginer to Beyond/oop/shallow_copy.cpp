#include <iostream>
#include <string>

using std::endl;

class Shallow{
private:
    int *data;

public:
    void set_value(int d) { *data = d;}
    int get_alue(){ return *data;}
    //constructor
    Shallow(int d);
    //copy constructor
    Shallow( const Shallow &source);
    //destructor
    ~Shallow();
};

Shallow::Shallow(int d) : data{new int} {
    *data = d;
}

Shallow::Shallow(const Shallow &source) : data{source.data} {
    std::cout<<"Copy constructor - shallow copy!" ;
}

Shallow::~Shallow(){
    delete data;
    std::cout<<"destructor freeing data" <<endl;
}

void display_shallow(Shallow s){
    std::cout<<s.get_alue() <<endl;
}

int main(){
    Shallow obj1{100};
    display_shallow(obj1);


    return 0;
};