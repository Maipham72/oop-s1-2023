#include <iostream>

class B {
  private: 
    int* _id;

  public: 
    B(int id) {
      *_id = id;  
    }

    B():B(0.5) {}
    int get_id() {
      return *_id;
    }

    void set_id(int id) {
      *_id = id;
    }
    ~B() {
      delete _id;
    }

};

class A {
  private:
    B b;
  
  public: 
    A() {
      std::cout << this->b.get_id() << std::endl; //problem here
    }
    ~A(){}
};

int main() {
  A a;
  return 0;
}

// output: seg fault
// pointer not initialize