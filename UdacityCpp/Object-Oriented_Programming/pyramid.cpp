#include <cassert>

class Pyramid {
  public:
    Pyramid(int l, int w, int h) : length_(l), width_(w), height_(h) {}
    int Length() const { return length_; }
    int Width() const { return width_; }
    int Height() const { return height_; }
  private:
    unsigned int length_;
    unsigned int width_;
    unsigned int height_;

};

int main() {

  Pyramid pyramid(1, 2, 3);
  assert(pyramid.Length() == 1);
  assert(pyramid.Width() == 2);
  assert(pyramid.Height() == 3);

}
