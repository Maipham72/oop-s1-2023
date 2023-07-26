#include <iostream>

class A {
  protected:
    int _a;
  public:
    A(int a): _a(a) {}
    A(): A(100){}
    int get_a() const {
      return _a;
    }
};

class B: public A {
  private:
    double _r;
  public: 
    B():_r(1) {}
    double foo() {
      return _a*_r;
    }
};

int main() {
  B b;
  std::cout << b.foo();
  return 0;
}

// when create a b, has a variable _r with value 1, _a is set to be 100 default constructor => output: 100*1 = 100