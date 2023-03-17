#include <iostream>

extern int bin_to_int(int[], int);
int main() {
  int binary_array[30] = {0,1,1,0};
  std::cout << "The number is: " << bin_to_int(binary_array,4) << std::endl;
}