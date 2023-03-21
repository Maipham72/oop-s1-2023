#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person* createPersonArray(int n) {
  Person* onePerson = new Person[n];
  for (int i = 0; i < n; i++) {
    onePerson[i].name = "John Doe";
    onePerson[i].age = 0;
  }
  return onePerson;
}