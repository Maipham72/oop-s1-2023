#include <iostream>
#include <vector>

template <class T>
struct Point {
  T _x = 10;
  T _y = 10;
};

typedef Point<int> Point_i;
int main() {
  std::vector <Point_i> v;
  v.resize(10);
  std::vector<Point_i>::iterator e;
  for (e = v.begin(); e < v.end(); e++) {
    std::cout << e->_x << std::endl;
  }
  return 0;
}

// output: ten 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10
// 10