#include <iostream>

class A {
  int x;
};

int main() {
  A a;
  std::cout << a.x << std::endl;
  return 0;
}

// output: error
// variable in accesible