#include <iostream>

class A {
  private:
    int _x;
  public:
    A(int x) {
      _x = x;
    }
    int get_x() {
      return _x;
    }
};

int main() {
  A a;
  std::cout << a.get_x() << std::endl;
  return 0;
}

// output: error
// instance of A does not match constructor
