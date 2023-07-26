#include <iostream>

template <class T>
class Point {
  private:
    int _x = 0;
    int _y = 0;
  public:
    Point (int x, int y): _x(x), _y(y) {}
    void setPoint(int x, int y) {
      _x = x;
      _y = y;
    }

    int get_x() {
      return _x;
    }

    int get_y() {
      return _y;
    }
};

int main() {
  Point<float> p1(0.4,0.5);
  std::cout << p1.get_x() << " " << p1.get_y() << std::endl;
  return 0;
}

// output: 0 0
// default change to 0 0 since input type is float and default type is int