#include <iostream>

class Shape {
  public: 
    virtual float get_area() { //making the function virtual -> override 
      return 0;
    }
};

class Circle : public Shape {
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
  Shape* s = new Circle();
  print_shape(s);
  return 0;
}

// output: 3.14 -> polymorphism