#include <iostream>
#include <vector>
#include <numeric>

void sequential_accumulate_test() {
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = std::accumulate(v.begin(), v.end(), 0);
    int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());

    auto dash_fold = [](std::string a, int b) {
        return std::move(a) + "-" + std::to_string(b);
    }; 

    std::string s = std::accumulate(std::next(v.begin()), v.end(), std::to_string(v[0]), dash_fold);

    std::cout << "sum - " << sum << "\n";
    std::cout << "product - " << product << "\n";
    std::cout << "dash fold - " << s << "\n";
}

int main() {
    sequential_accumulate_test();
    return 0;
}

