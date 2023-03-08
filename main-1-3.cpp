#include <iostream>

extern int count_digits (int[4][4]);
int main() {
  int array[4][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,1,2}, {3,4,5,6}};
  count_digits(array);
}