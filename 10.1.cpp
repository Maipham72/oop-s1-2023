#include <iostream>
#include <string>

void fun() {
  static int count = 0;
  if (count == 4) {
    std::cout << count << " ";
  }
  count++;
}

int main() {
  for (int i = 0; i < 5; i++) {
    fun();
  }
  return 0;
}

// output: 4