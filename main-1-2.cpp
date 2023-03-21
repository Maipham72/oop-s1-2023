#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern Person* createPersonArray(int);

int main() {
  int n = 2;
  PersonList ppl = createPersonList(n);
  for (int i = 0; i < n; i++) {
    cout << ppl.people[i].name << " " << ppl.people[i].age << endl;
  }

  delete [] ppl.people;
  return 0;
}