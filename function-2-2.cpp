#include <iostream>
#include <string>
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
  std::string binary;
  for (int i = 0; i < number_of_digits; i++) {
    binary = binary + std::to_string(binary_digits[i]);
  }
  int n = stoi(binary);
  int rem;
  int i = 0;
  int decimal = 0;
  while (n != 0) {
    rem = n % 10;
    n = n / 10;
    decimal += rem * pow(2,i);
    i++;
  }
  return decimal;
}