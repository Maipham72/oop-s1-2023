#include <iostream>

extern int max_element(int[], int);
int main() {
  int array[5] = {1,2,3,4,5};
  std::cout << "The maximum number is: " << max_element(array,5) << std::endl;
  return 0;
}