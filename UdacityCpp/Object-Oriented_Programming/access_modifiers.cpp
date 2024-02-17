// Include iostream for output
#include <cassert>
#include <iostream>

// Define a simple structure
struct Date {
  public:
  void Day () { return day; }
  void Day(int d) { day = d; }
  int month{1};
  int year{0};

  private:
  int day{1};
};

// Define a main function instantiate and test 
int main () {
  Date date;
  date.Day(-7);
  assert(date.Day() == -7);
  assert(date.month == 1);
  assert(date.year == 0);
  std::cout <<date.Day() <<"/" <<date.month <<"/" <<date.year <<"\n";
}
