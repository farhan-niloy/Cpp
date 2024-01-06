#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::vector;

class Move{

private:
    int *data;

public:
    void set_value( int d){*data = d;}
    int get_value(){return *data;}

    Move(int d);
    Move( Move &&source) noexcept;
    ~Move();
};

Move::Move(int d) : data{new int} {
    *data = d;
    std::cout<<"Constructor called for - " <<d <<endl;
}

Move::Move(Move &&source) noexcept
    :data{source.data}{
    source.data = nullptr;
    std::cout<<"Move constructor moving resource: " <<*data <<endl;
}

int main(){
    vector<Move> vec;


    return 0;
}