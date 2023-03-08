#include <iostream>

void print_binary_str(std::string decimal_number) {
  int binary = 0; 
  int rem;
  int i = 1;
  int n = stoi(decimal_number);

  while ( n !=0) {
    rem = n % 2;
    n = n/2;
    binary += rem*i;
    i *= 10;
  }
  std::cout << binary << std::endl;
}
