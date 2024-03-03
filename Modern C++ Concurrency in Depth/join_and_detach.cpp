
#include <iostream>
#include <thread>
#include <chrono>

void foo() {
  std::this_thread::sleep_for(std::chrono::milliseconds(5000));
  std::cout << "Hello from foo" << std::endl;
}

void bar() {
  std::this_thread::sleep_for(std::chrono::milliseconds(5000));
  std::cout << "Hello from bar" << std::endl;
}

void run() {
  std::thread foo_thread(foo);
  std::thread bar_thread(bar);

  bar_thread.detach();
  std::cout << "This is after bar thread" << std::endl;

  foo_thread.join();
  std::cout << "This is after foo thread" << std::endl;
}

int main() {
  run();
  return 0;
}

