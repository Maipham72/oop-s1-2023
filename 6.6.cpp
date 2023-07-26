#include <iostream>

class A{
  public: 
    virtual void foo() {
      std::cout << "This is A\n";
    }
};

class B: public A {
  public:
    void foo() {
      std::cout << "This is B\n";
    }
};

class C: public B {
  public:
    void foo() {
      std::cout << "This is C\n";
    }
};

void test(A* a) {
  a->foo();
}

int main() {
  C c;
  test(&c);
  return 0;
}

// output: This is C