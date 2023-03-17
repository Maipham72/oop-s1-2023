#include <iostream>
#include <string>
#include <math.h>

int bin_to_int(int binary_digits[], int number_of_digits) {
  std::string binary;
  for (int i = 0; i < number_of_digits; i++) {
    binary = binary + std::to_string(binary_digits[i]);
  }

  int bin = stoi(binary);
  int decimal = 0;
  int remainder;
  int i = 0;
  while (bin != 0) {
    remainder = bin % 10;
    bin = bin / 10;
    decimal = decimal + remainder*pow(2,i);
    i++;
  }
  return decimal;
}