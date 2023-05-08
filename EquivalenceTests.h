#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H
#include <iostream>
#include "Addition.h"

class EquivalenceTests {
  public: 
    void runTests() {
      testPositiveIntegers();
      testNegativeIntegers();
      testIntegers();
      testZeros();
    }

  private:
    void testPositiveIntegers() {
      Addition addition;
      if (addition.add(5,10) != 15) {
        std::cout << "Test 1 failed" << std::endl;
      }
    }

    void testNegativeIntegers() {
      Addition addition;
      if (addition.add(-4,-5) != -9) {
        std::cout << "Test 2 failed!" << std::endl;
      }
    }

    void testZeros() {
      Addition addition;
      if (addition.add(0,0) != 0) {
        std::cout << "Test 3 failed!" << std::endl;
      }
    }

    void testIntegers() {
      Addition addition;
      if (addition.add(-4,5) != 1) {
        std::cout << "Test 4 failed!" << std::endl;
      }
    }
};

#endif