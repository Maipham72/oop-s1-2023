#include <iostream>
#include <vector>

template <class T>
struct Point {
  T _x = 0;
  T _y = 0;
};

int main() {
  std::vector <Point<int>> v; 
  Point<int> p;
  v.push_back(p);
  std::cout << v.size() << std::endl;
  return 0;

}

// output: 1