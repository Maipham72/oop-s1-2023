#include <iostream>

extern bool is_ascending(int[],int);
int main() {
  int array[9] = {1,2,3,4,6,5,7,8,9};
  std::cout << is_ascending(array,9) << std::endl;
}