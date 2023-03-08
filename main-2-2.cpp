#include <iostream>

extern int binary_to_int (int[], int);
int main() {
  int binary[30] = {0,1,1,1};
  std::cout << "Decimal number is: " << binary_to_int(binary,4) << std::endl;
}