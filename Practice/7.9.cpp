#include <iostream>

class Shape {
  public:
    virtual float get_area() {
      return 0;
    };
};

class Circle: public Shape {
  private:
    float r = 10;
  
  public:
    float get_area() {
      return r*r*3.14;
    }
};

void print_shape(Shape* s) {
  std::cout << s->get_area() << std::endl;
}

int main() {
  Shape* s[2];
  s[0] = new Circle();
  s[1] = new Shape(); // cant create object of type shape
  print_shape(s[1]); // we are printing out Shape
  return 0;
}

// output: 0