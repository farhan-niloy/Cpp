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

Move::~Move(){
    if (data != nullptr){
        std::cout<<"Destructor freeing data for: " <<*data <<endl;
    } else {
        std::cout<<"Destructor freeing data from nullptr" <<endl;
    }
}

int main(){
    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
    vec.push_back(Move{90});

    return 0;
}