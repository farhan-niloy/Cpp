#include <iostream>
#include <thread>

using namespace std;

int myAmount = 0;

void addMoney() {
  ++myAmount;
}

int main() {
  std::thread t1(addMoney);
  std::thread t2(addMoney);

  t1.join();
  t2.join();

  cout<<myAmount <<endl;

  return 0;
}
