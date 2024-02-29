#include <iostream>
#include <thread>

void test() {
  printf("Hello from test \n");
}

int main (int argc, char *argv[]) {
 
  std::thread thread1(test);

  if(thread1.joinable() ) {
    printf("Thread 1 is joinable before join\n");
  } else {
    printf("Thread 1 is not joinable before join\n");
  }

  thread1.join();

  if(thread1.joinable()) {
    printf("Thread 1 is joinable after join\n");
  } else {
    printf("Thread 1 isn't joinable after join\n");
  }

  return 0;
}
