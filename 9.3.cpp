#include <iostream>

template <class T, class K>
class Point {
  private:
    T _x = 0;
    K _y = 0;
  public:
    Point (T x, K y): _x(x), _y(y) {}
    void setPoint(T x, K y) {
      _x = x;
      _y = y;
    }

    T get_x() {
      return _x;
    }

    K get_y() {
      return _y;
    }
};

int main() {
  Point<float,char> p1(0.4,'a');
  std::cout << p1.get_x() << " " << p1.get_y() << std::endl;
  return 0;
}

// output: 0.4 a