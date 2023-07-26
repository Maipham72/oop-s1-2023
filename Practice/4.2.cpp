#include <iostream>

class A {
  int x;
};

int main() {
  A a;
  std::cout << a.x << std::endl;
  return 0;
}

// output: error, x is till inaccesible since it is private(default) need a get_x()