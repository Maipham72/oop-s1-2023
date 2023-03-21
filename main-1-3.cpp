#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern Person* createPersonArray(int);
extern PersonList deepCopyPersonList(PersonList);

int main() {
  int n = 2;
  PersonList ppl = createPersonList(n);
  PersonList deepPpl = deepCopyPersonList(ppl);

  for (int i = 0; i < n; i++) {
    cout << deepPpl.people[i].name << " " << deepPpl.people[i].age << endl;
  }

  delete [] deepPpl.people;
  delete [] ppl.people;

  return 0;

}