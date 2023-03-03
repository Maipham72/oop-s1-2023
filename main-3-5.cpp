#include <iostream>

extern double sum_even(double[], int);
int main() {
  double array[5] = {1,2,3,4,5};
  std::cout << "The sum of number in even position is: " << sum_even(array,5) << std::endl;
  return 0;
}