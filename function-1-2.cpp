#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n) {
  PersonList peopleList;
  peopleList.numPeople = n;
  peopleList.people = new Person[n];
  for (int i = 0; i < n; i++) {
    peopleList.people[i].name = "Jane Doe";
    peopleList.people[i].age = 1;
  }
  return peopleList;
}