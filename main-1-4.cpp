#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);
extern Person* createPersonArray(int);
extern PersonList deepCopyPersonList(PersonList);
extern PersonList shallowCopyPersonList(PersonList);

int main() {
  int n = 2;
  PersonList ppl;
  PersonList shallowPpl = shallowCopyPersonList(ppl);

  for (int i = 0; i < n; i++) {
    cout << shallowPpl.people[i].name << " " << shallowPpl.people[i].age << endl;
  }

  delete [] shallowPpl.people;

  return 0;

}
