#include <iostream>

class A {
  protected:
    int _a;
  public:
    A(int a): _a(a) {}
    A():A(100) {}
    void say_hi() {
      std::cout << "Hi! I am A\n";
    }
};

class B: public A {
  private:
    double _r;
  public:
    B(): _r(0.5) {}
    void say_hi() {
      std::cout << "Hi! I am B\n";
    }
};

int main() {
  B b;
  b.say_hi();
  return 0;
}

// output: Hi! I am B