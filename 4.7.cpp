#include <iostream>

class A {
  private:
    int _size;
    int* _x;
  public:
    A(int size): _size(size) {
      _x = new int[size];
    }
    A():A(0){}
    void print_x() {
      for (int i =0; i < _size; i++) {
        std::cout << _x[i] << " ";
      }
    }
};

int main() {
  A a(3);
  a.print_x();
  return 0;
}

// output: 0 0 0