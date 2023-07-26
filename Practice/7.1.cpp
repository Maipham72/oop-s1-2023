#include <iostream>

struct Point {
  int x;
  int y;
};

class A {
  private:
    Point _p;
  
  public:
    A() {
      _p = {10,10};
    }

    void set_p(int x, int y) {
      _p.x = x;
      _p.y = y;
    }
    Point get_p() {
      return _p;
    }
};

int main() {
  A a1;
  a1.set_p(500,500);
  A a2(a1);
  std::cout << a2.get_p().x << "," << a2.get_p().y << std::endl;
  return 0;
}

// output : 500, 500