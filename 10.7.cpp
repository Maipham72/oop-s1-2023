#include <iostream>

class Fun {
  public:
    static void InFun() {
      std::cout << "Fun ";
    }
};

int main() {
  Fun.InFun(); // wrong syntax Fun::(static function)
}

// output: error

