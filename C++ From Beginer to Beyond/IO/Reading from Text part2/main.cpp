#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_line;
    in_line.open("../test.txt");
    if(!in_line){
        std::cerr <<"Problem opening file" <<std::endl;
        return 1;
    }

    std::string line;
    while(std::getline(in_line, line)){
        std::cout<<line <<std::endl;
    }
    return 0;
}
