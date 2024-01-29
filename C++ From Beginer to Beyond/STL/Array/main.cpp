#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>

void display(const std::array<int, 5> &arr){
    std::cout<<"[ ";
    for(const auto &r: arr)
        std::cout<< r <<" ";
    std::cout<< " ]" <<std::endl;
}

void test1(){
    std::cout <<"\nTest1===================================================" <<std::endl;
    std::array<int, 5> arr {1,2,3,4,5};
    std::array<int, 5> arr2;

    display(arr);
    display(arr2);

    arr2 = {10, 20, 30, 40, 50};
    display(arr);
    display(arr2);

    std::cout<<"Size of arr1 is: " <<arr.size() <<std::endl;
    std::cout<<"Size of arr1 is: " <<arr2.size() <<std::endl;

    arr[0] = 1000;
    arr.at(1) = 2000;
    display(arr);

    std::cout<<"Front of arr2: " <<arr2.front() <<std::endl;
    std::cout<<"Back of arr2: " <<arr2.back() <<std::endl;
}

void test2(){
    std::cout<<"\nTest2=========================================" <<std::endl;
    std::array<int, 5> arr {1,2,3,4,5};
    std::array<int, 5> arr2 {10, 20, 30, 40, 50};

    display(arr);
    display(arr2);

    arr.swap(arr2);

    display(arr);
    display(arr2);
}

void test3(){
    std::cout<<"\nTest3===========================================" <<std::endl;

    std::array<int, 5> arr {1,2,3,4,5};

    int *ptr = arr.data();
    std::cout <<ptr <<std::endl;
    *ptr = 1000;

    display(arr);

}

void test4() {
    std::cout<<"\nTest4===================================================" <<std::endl;

    std::array<int, 5> arr1 {2,1,4,5,3};
    display(arr1);

    std::sort(arr1.begin(), arr1.end());
    display(arr1);

}

void test5() {
    std::cout << "\n============================================" << std::endl;

    std::array<int, 5> arr1{2, 1, 4, 5, 6};

    std::array<int, 5>::iterator min_num = std::min_element(arr1.begin(), arr1.end());
    auto max_num = std::max_element(arr1.begin(), arr1.end());
    std::cout<<"min: " <<*min_num <<" , max: " <<*max_num <<std::endl;
}

void test6(){
    std::cout<<"\nTest6=======================================" <<std::endl;

    std::array<int, 5> arr1 {2,1,3,4,5};

    auto adjacent = std::adjacent_find(arr1.begin(), arr1.end());
    if(adjacent != arr1.end())
        std::cout<<"Adjacent element found with value: " <<*adjacent <<std::endl;
    else
        std::cout<<"NO adjacent element found " <<std::endl;
}


int main() {
    test1();
    test2();
    test3();

    return 0;
}
