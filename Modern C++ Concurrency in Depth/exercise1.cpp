#include <iostream>
#include <thread>

void test() {
  printf("Hello fro test - %d \n", std::this_thread::get_id);
}

void functionA() {
  std::thread threadc(test);
  threadc.join();

  printf(" Hello from functionA - %d \n", std::this_thread::get_id());
}

void functionB() {
  printf("Hello from functionB - %d \n", std::this_thread::get_id());
}

int main() {

  std::thread threadA(functionA);
  threadA.join();

  std::thread threadB(functionB);
  threadB.join();

  return 0;
}
