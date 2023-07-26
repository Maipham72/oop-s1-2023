#include <iostream>

class A{
  protected:
    int _x;
  public:
    A():_x(100) {}
    virtual void foo() {
      std::cout << this->_x<< std::endl;
    }
};

class B: public A {
  private:
    int _y;
  
  public:
    B(): _y(200) {}
    void foo() {
      std::cout << this->_x << "," << this->_y << std::endl; // overriden the base class
    }
};

void test(A* a) { //a pointer to some object of class A
  a->foo();
}

int main() {
  B b;
  test(&b);
  return 0;
}

// output: 100,200
//  refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.