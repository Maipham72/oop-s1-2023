#include <iostream>
#include <cmath>

int base10ToBase2 (int n) {
  int binary = 0; 
  int rem;
  int i = 1;

  while (n!=0) {
    rem = n % 2;
    n = n/2;
    binary += rem*i;
    i *= 10;
  }

  return binary;
}

int base2ToBase10 (int n) {
  int decimal = 0;
  int i = 0;
  int rem;

  while (n!=0) {
    rem = n % 10;
    n = n / 10;
    decimal += rem * pow(2,i);
    i++;
  }
  return decimal;
}

void base10ToBase8 (int n) {
  int octal[100];
  int i = 0;

  while (n!=0) {
    octal[i] = n % 8;
    n = n/8;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    std::cout << octal[j];
  }
}

int main() {
  int n;
  int bin;

  std::cout << "Enter a number: ";
  std::cin >> n;

  bin = base10ToBase2(n);

  std::cout << bin << std::endl;

}