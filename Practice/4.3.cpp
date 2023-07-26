#include <iostream>

class A {
  private:
    int _x;
  
  public: 
    A(int x) {
      _x = x; 
    }
};

int main() {
  A a(5);
  std::cout << a._x << std::endl;
  return 0;
}

// output: error. X is still inaccesible since x is private