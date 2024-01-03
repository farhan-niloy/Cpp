#include <iostream>
#include <string>

using std::endl;

class Deep{
private:
    int *data;

public:
    void set_value(int d) { *data = d;}
    int get_value(){return *data;}
    Deep (int d);
    Deep (const Deep &source);
    ~Deep();
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source) :Deep{*soruce.data}{
    std::cout<<"Copy constructor - Deep copy" <<endl;
}

Deep::~Deep(){
    delete data;
    std::cout<<"Destructor!" <<endl;
}

void display_deep(Deep s) {
    std::cout<<s.get_value() <<endl;
}

int main(){
    Deep obj1{100};
    display_deep(obj1);

    Deep obj2{1000};
    display_deep(obj2);

    return 0;
}