#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
  PersonList newPersonList;
  newPersonList.numPeople = pl.numPeople;
  newPersonList.people = pl.people;
  for (int i = 0; i < pl.numPeople; i++) {
    newPersonList.people[i].name = pl.people->name;
    newPersonList.people[i].age = pl.people->age;
  }

  return newPersonList;
}
