// Include iostream for output
#include <cassert>
#include <iostream>

// Define a simple structure
struct Date {
  int day;
  int month;
  int year;
}

// Define a main function instantiate and test 
int main () {
  Date date;

  // TODO: Initialize date to August 29, 1981
  

  // Test 
  assert(date.day == 29);
  assert(date.month == 8);
  assert(date.year == 1981);

  // Print the date is in the structure
  std::cout <<date.day <<"/" <<date.month <<"/" <<date.year <<"\n";
}
