#include <iostream>
#include <string>

class Player{
private:
    string name{"Player"};
    int health;
    int xp;

public:
    void talk(string text_to_say){cout<<name <<"says" <<text_to_say}
};

int main(){
    Player gin;
    //gin.name = "Gintoki";
    //cout<<gin.health <<endl;

    gin.talk("Hey there!");

    return 0;
}