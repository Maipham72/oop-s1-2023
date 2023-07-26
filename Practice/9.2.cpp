#include <iostream>

template <class T>
class Point {
  private:
    T _x = 0;
    int _y = 0;
  public:
    Point (T x, int y): _x(x), _y(y) {}
    void setPoint(T x, int y) {
      _x = x; 
      _y = y;
    }
    T get_x() {
      return _x;
    }

    int get_y() {
      return _y;
    }
};

int main() {
  Point<float> p1(0.4,0.5);
  std::cout << p1.get_x() << "," << p1.get_y() << std::endl;
  return 0;
}

// output: 0.4, 0
// template only set for x, not y