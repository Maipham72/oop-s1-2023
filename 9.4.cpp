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

typedef Point<int, int> Point_i;
int main() {
  Point_i* ps = new Point_i(10,0.6);
  std::cout << ps->get_x() << " " << ps->get_y() << std::endl;
  return 0;
}

// output: 10 0
// the point type is int int