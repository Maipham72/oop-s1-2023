#include <iostream>

class A {
  private:
    int* _x;
  public:
    A(int x) {
      _x = new int;
    }
    A():A(0){}
    void set_x(int x) {
      *_x = x;
    }
    int get_x() {
      return *_x;
    }
};

int main() {
  A* a; 
  a->set_x(100);
  std::cout << a->get_x() << std::endl;
  return 0;
}

// output: error
// pointer has no object, pointing to nowhere