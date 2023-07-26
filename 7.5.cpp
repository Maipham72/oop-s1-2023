#include <iostream>

struct Point {
  int x;
  int y;
};

class A {
  protected:
    Point* _c;
  
  public: 
    A() {
      _c = new Point{0,0};
    }

    virtual ~A() {
      delete _c;
      std::cout << "point c deleted\n";
    }
};

class B: public A {
  private:
    Point* _d;

  public:
    B() {
      _d = new Point{0,0};
    }

    ~B() {
      delete _d;
      std::cout << "Point d deleted\n";
    }
};

int main() {
  A* obj = new B();
  delete obj; // object belongs to A
  return 0;
}

//output: point d deleted 
//        point c deleted