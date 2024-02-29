#include <iostream>

int main() {

  int id = 0;

  auto f0 = [&id] () { std::cout <<"a) ID in Lamda = " <<id <<std::endl; };
  
  auto f1 = [id] () mutable { std::cout <<"b) ID in Lamda = " <<++id <<std::endl; };
  f1();
  std::cout <<"c) ID in Main = " <<id <<std::endl;


  auto f2 = [&id] () mutable { std::cout <<"d) ID in Lamda = " <<++id <<std::endl; };
  f2();
  std::cout <<"e) ID in Main = " <<id <<std::endl;


  auto f3 = [] (const int id) { std::cout <<"f) ID in Lamda = " <<id <<std::endl; };
  f3(++id);

  f0();

  return 0;
}
