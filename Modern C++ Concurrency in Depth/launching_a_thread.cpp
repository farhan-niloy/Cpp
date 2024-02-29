#include <iostream>
#include <thread>

void foo() {
  printf("Hello from foo - %d \n", std::this_thread::get_id());
}

class Callable_Class {
public:
  void operator()() {
    printf("Hello from class with function call operator - %d \n", std::this_thread::get_id());
  }
};

void run() {
  std::thread thread1(foo);
  thread1.join();

  Callable_Class obj;
  std::thread thread2(obj);
  thread2.join();

  std::thread thread3([]{
      printf("Hello from lambda - %d \n", std::this_thread::get_id());
      });
  thread3.join();

  printf("Hello from main - %d \n", std::this_thread::get_id());
} 

int main() {

  run();

  return 0;
}
