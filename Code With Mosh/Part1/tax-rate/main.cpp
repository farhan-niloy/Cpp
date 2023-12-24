#include <iostream>

using namespace std;

int main() {
    const double stat_tax{.04};
    const double county_tax{.02};
    int sales{95000};

    double calc_stax = sales * stat_tax;
    double calc_c_tax = sales * county_tax;

    cout<<"C Tax = " <<calc_c_tax <<endl;
    cout<<"S Tax = " <<calc_stax <<endl;

    return 0;
}
