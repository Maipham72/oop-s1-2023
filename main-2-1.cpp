#include <iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int [],int);

int main() {
  int *array = readNumbers();
  
  hexDigits(array,10);

  delete [] array;

  return 0;
}