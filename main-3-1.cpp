#include <iostream>
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int[], int[], int);

int main() {
  int *array1 = readNumbers();
  int *array2 = readNumbers();
  
  equalsArray(array1, array2, 10);

  delete [] array1;
  delete [] array2;

  return 0;
}