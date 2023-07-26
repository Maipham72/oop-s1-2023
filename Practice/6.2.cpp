#include <iostream>

class A {
  protected:
    int _x;
  public:
    A(): _x(100) {}
    void foo() {
      std::cout << this->_x<< std::endl;
    }
};

class B: public A {
  private:
    int _y;
  public:
    B():_y(200) {}
    void foo() {
      std::cout << this->_x << "," << this->_y << std::endl;
    }
};

void test(A a) { //take object of class A => run A
  a.foo();
}

int main() {
  B b;
  test(b);
  return 0;
}

// output: 100 
// generate info related to A only. Run B but cuts everything of B, only show A