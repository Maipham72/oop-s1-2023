#include <iostream>

extern int sum_diagonal (int[4][4]);
int main() {
  int array[4][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}, {12,13,14,15}};
  std::cout << "The sum along the diagonal is: " << sum_diagonal(array) << std::endl;
}