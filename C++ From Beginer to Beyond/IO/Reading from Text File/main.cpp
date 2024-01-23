#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;
    in_file.open("test.txt");

    if(!in_file){
        std::cerr<<"Problem opening file" <<std::endl;
        return 1;
    }

    std::cout<<"File is good to go" <<std::endl;

    return 0;
}
