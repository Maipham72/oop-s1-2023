#include <iostream>
#include <cmath>

int addition (int n, int n1) {
  int sum[100];
  int i = 0;
  int remainder = 0;
  while (n!=0 || n1 != 0) {
    sum[i++] = (n % 10 + n1 % 10 + remainder) % 2;
    remainder = (n / 10 + n1 / 10 + remainder)/2;
    n = n/10;
    n1 = n1/10;
  }

  if (remainder != 0) {
    sum[i++] = remainder;
  }
  i--;
  while (i>= 0) {
    std::cout << sum[i--];
  }
}

int main() {
  int n;
  int n1;
  int sum;
  std::cout << "Enter binary number 1: ";
  std::cin >> n;
  std::cout << "Enter binary number 2: ";
  std::cin >> n1;
  sum = addition(n,n1);
}