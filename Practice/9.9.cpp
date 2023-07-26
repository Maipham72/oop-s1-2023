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
  Point_i p;
  v.push_back(p); //push back works for vectors with type, this is a vector of pointers, no matching
  std::cout << v.size() << std::endl;
}

//output: Error
