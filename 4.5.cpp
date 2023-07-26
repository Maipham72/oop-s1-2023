#include <iostream>

class A {
  private:
    int _x;
  public:
    A(int x) {
      _x = x;
    }
    A():A(0){}
    int get_x() {
      return _x;
    }
};

int main() {
  A a;
  std::cout << a.get_x() << std::endl;
  return 0;
}

// output: 0