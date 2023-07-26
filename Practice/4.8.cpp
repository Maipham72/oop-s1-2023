#include <iostream>

class A {
  private:
    int* _x;
  
  public:
    A(int x) {
      _x = new int;
    }

    A():A(0) {}
    void set_x(int x) {
      *_x = x;
    }

    int get_x() {
      return *_x;
    }

    ~A() {
      delete _x;
    }
};

int main() {
  A* a; //create a pointer, allocate space, but no object a. No object was created, when trying to access memory, no object of A -> seg fault
  a->set_x(100);
  std::cout << a->get_x() << std::endl;
  return 0;
}

// output: seg fault 
// create a pointer but not pointing anywhere