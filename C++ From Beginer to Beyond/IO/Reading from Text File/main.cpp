#include <iostream>
#include <fstream>

int main() {
    std::string line;
    std::ifstream in_file;

    in_file.open("../test.txt");
    if(!in_file){
        std::cerr<<"Problem opening file" <<std::endl;
        return 1;
    }

    std::cout<<"File is good to go" <<std::endl;

    in_file >> line;
    std::cout<<line <<std::endl;
    return 0;
}
