#include <iostream>
#include <vector>

template <class T>
struct Point {
  T _x = 0;
  T _y = 0;
};

typedef Point<int> Point_i;
int main() {
  std::vector <Point_i*> v;
  v.push_back(new Point_i);
  std::cout << v.size() << std::endl;
  return 0;
}

//output: 1