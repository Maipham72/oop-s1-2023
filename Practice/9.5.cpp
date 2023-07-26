#include <iostream>

template <class T, class K>
class Point {
  private:
    T _x = 0;
    K _y = 0;
  public:
    Point (T x, K y): _x(x), _y(y) {}
    void setPoint(T x, K y) {
      _x = x; 
      _y = y;
    }
    T get_x() {
      return _x;
    }

    K get_y() {
      return _y;
    }
};

typedef Point<int, int> Point_i;
typedef Point_i* Point_i_ptr;

int main(){
  Point_i** ps; // **
  ps[0] = new Point_i(0,0); //ps is uninitialized when used here
  ps[1] = new Point_i(1,1);
  std::cout << ps[0]->get_x() << "," << ps[0]->get_y() << std::endl;
  return 0;
}

//output: error (seg fault)
