#include <iostream>

class Fun {
 int i;
 public:
  Fun() {
    i = 0;
    std::cout << "Constructor" << std::endl;
  }
  ~Fun() {
    std::cout << "Destructor" << std::endl;
  } 
};

int main() {
  int x =0;
  if (x ==0) {
    Fun obj;
  }
  std::cout << "main" << std::endl;
}

// output: Constructor Destructor main