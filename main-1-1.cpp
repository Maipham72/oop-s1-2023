#include <iostream>

extern int *readNumbers();
extern void printNumbers(int [],int);
int main() {
  int *array = readNumbers();
  
  printNumbers(array,10);

  delete [] array;

  return 0;
}