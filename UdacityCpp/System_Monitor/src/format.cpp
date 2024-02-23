#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
string Format::ElapsedTime(long seconds) {
  int hours, minutes;
  hours = seconds / 3600;
  seconds = seconds % 3600;
  minutes = seconds / 60;
  seconds = seconds % 60;
  return std::to_string(hours) + ":" + std::to_string(minutes) + ":" +
         std::to_string(seconds);
}