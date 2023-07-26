#include <iostream>

class Fun {
  public:
    static void InFun() {
      std::cout << "Fun" << std::endl;
    }
};

int main() {
  Fun::InFun();
}

// output: Fun