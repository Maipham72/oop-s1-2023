#include <iostream>

class Shape {
  public: 
    virtual float get_area() = 0; // abstract class
};

class Circle: public Shape {
  private:
    float r = 10;

  public:
    float get_area() {
      return r*r*3.14;
    }
};

void print_shape (Shape* s) {
  std::cout << s->get_area() << std::endl;
}

int main() {
  Shape* s[2];
  s[0] = new Circle();
  s[1] = new Shape(); // object of abstract class is not allowed
  print_shape(s[0]);
  return 0;
}

// output: error