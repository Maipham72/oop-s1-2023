#ifndef CLINIC_H
#define CLINIC_H
#include <string>
#include "Cage.h"

class Clinic {
  private:
    std::string name;
    int max_size;
    Cage* animal_list;
    int animal_count = 0;

  public:
    Clinic();
    Clinic(std::string name, int max_size);
    int get_number_of_cages();
    std::string get_name();
    Cage* get_cages();
    bool add_cage(Cage new_cage);
};

#endif
