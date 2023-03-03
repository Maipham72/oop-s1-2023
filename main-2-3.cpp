#include <iostream>

extern void two_five_nine(int[],int);
int main() {
  int array[9] = {1,2,3,4,5,6,7,8,9};
  two_five_nine(array,9);
  return 0;
}