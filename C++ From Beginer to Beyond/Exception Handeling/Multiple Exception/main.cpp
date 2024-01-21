#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons){
    if (gallons == 0)
        throw 0;
    return static_cast<double>(miles)/gallons;
}

int main() {
    int miles{};
    int gallons{};
    int miles_per_gallon{};

    std::cout<<"Enter the miles: ";
    std::cin>>miles;
    std::cout<<"Enter the gallons: ";
    std::cin>>gallons;

    try{
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout<<"Result: " <<miles_per_gallon;
    }
    catch (int &ex){
        std::cerr<<"Divide by 0 err" <<std::endl;
    }

    return 0;
}
