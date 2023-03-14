#include <iostream>

int size_of_variable_star_t() {
  int a, *t;
  t = &a;

  int ptr_size = sizeof(t);

  return ptr_size;
  
}
