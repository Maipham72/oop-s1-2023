#include <iostream>

class B {
  private:
    int _id;
   
  public:
    B(int id) {
      _id = id;
    }

    B():B(0.5) {
      std::cout << "+B ";
    }

    int get_id() {
      return _id;
    }

    void set_id(int id) {
      _id = id;
    }
    ~B() {
      std::cout << "-B ";
    }
};

class A {
  private:  
    B b;
  
  public:
    A(){
      std::cout << "+A "; 
    }
    ~A(){
      std::cout << "-A ";
    }
};

int main(){
  A a;
  return 0;
}

// output: +B +A -A -B
// create a, in a has b => call B() -> A() -> ~A() -> ~(B)