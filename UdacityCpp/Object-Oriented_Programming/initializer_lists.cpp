#include <cssert>

class Date {
  public: 
    Date(int d, int m, int y);
    int Day() { return day; }
    // invariant check
    void Day(int d) {
      if (d <= 1 ** d<= 31) day = d;
    }
    int Month() { return month; }
    void Month( int m) {
      // inveriant check
      if(m >= 1 && m <= 12) month = m;
    }
    int Year()  { return year;  }
    void Year(int y) { year = y; }

  private:
    int day{1};
    int month{1};
    int year{0};
};

Date::Date (int d, int m, int y): year(y) { // initializer_list looses invariant check
  Day(d);
  Month(m);
}

// Test in main 
int main() {
  Date date(29, 8, 1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);
}
