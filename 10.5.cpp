#include <iostream>

class Fun {
  int i;
  public:
    Fun() {
      i = 0;
      std::cout << "Constructor "; 
    }
    ~Fun() {
      std::cout << "Destructor ";
    }
};

int main() {
  int x = 0; 
  if (x == 0) {
    static Fun obj;
  }
  std::cout << "main";
}

// output: Constructor main Destructor