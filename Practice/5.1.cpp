#include <iostream>

class A {
  private:
    int _a;
  public:
    A(int a): _a(a) {}
    A():A(100) {}
    int get_a() const {
      return _a;
    }
};

class B : public A {
  private:
    double _r;
  public: 
    double foo() {
      return _a*_r;
    }
};

int main() {
  B b;
  std::cout << b.foo();
  return 0;
}

// output: error, cant access _a 