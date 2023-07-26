#include <iostream>

class A {
  public:
    virtual void foo() {
      std::cout << "This is A\n";
    }
};

class B: public A {
  public:
    void fun1() {
      std::cout << "This is fun1 in B\n";
    }
};

int main() {
  B b;
  b.foo();
  return 0;
}

// output: This is A