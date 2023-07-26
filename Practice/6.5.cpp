#include <iostream>

class A {
  public:
    void foo() {
      std::cout << "This is A\n";
    }
};

class B : public A {
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

void test(A* a) { // create a pointer to an object in A
  a->foo(); // run foo in A
}

int main() {
  C c;
  test(&c); //this would still point to an object in A
  return 0;
}

// output: This is A 
//