#include <iostream>
#include <vector>

template <class T>

struct Point {
  T _x = 0;
  T _y = 0;
};

typedef Point<int> Point_i;
int main() {
  std::vector<Point_i*> v;
  Point_i* p;
  v.push_back(p);
  std::cout << v[0]->_x << "\n";
  return 0;
}

// output: error
// point to arbitrary place
