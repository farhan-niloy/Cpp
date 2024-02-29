#include <iostream>
#include <thread>

void foo() {
  printf("Hello from foo \n");
}

class Callable_Class{

  public:
    void operator() {
      printf("Hello from class with function call operator! \n");
    }
}

void run() {
  std::thread thread1(foo);
  thread1.join();

  Callable_Class obj;
  std::thread thread2(obj);
  thread2.join();

  std::thread thread3([]{
      printf("Hello from lamda \n");
      });
  thread3.join();

  printf("Hello from main \n");
}
