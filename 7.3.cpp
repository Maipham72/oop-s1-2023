#include <iostream>

struct Point {
  int x;
  int y;
};

class A {
  private:
    Point* _p;
  public:
  A() {
    _p = new Point{10,10};
  }

  A(const A& a2) {
    _p = new Point{a2._p->x, a2._p->y};
  }

  void set_p(int x, int y) {
      _p->x = x;
      _p->y = y;
  }

  Point get_p() {
    return *_p;
  }
};

int main() {
  A a1;
  a1.set_p(500,500);
  A a2 = a1;
  a1.set_p(3,5);
  std::cout << a2.get_p().x << " " << a2.get_p().y << std::endl;
}

// output: 500 500
// const keep the value when first intialize constant