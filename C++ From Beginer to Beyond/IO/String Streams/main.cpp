#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main() {
    int num{};
    double total{};
    std::string name{};

    std::string info {"Larry 100 1234.5"};
    std::istringstream iss{info};

    iss >>name >>num >>total;
    std::cout <<std::setw(10) <<name
              <<std::setw(5) <<num
              <<std::setw(5) <<total <<std::endl;

    return 0;
}
