#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::endl;
using std::cout;

class Player {
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_val) {
        name = name_val;
    }

    std::string get_name() const {return name;}

    //Overloaded constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);
};

int main(){

    return 0;
}