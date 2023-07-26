#include <iostream>
#include <string>

class Car {
  protected:
    std::string _model;
    int _year;
  
  public:
    Car(std::string model, int year): _model(model), _year(year) {}
    Car():Car("",0) {}
};

class SportCar: public Car {
  private:
    int _top_speed;
  public:
    SportCar(std::string model, int year, int top_speed): Car(model, year), _top_speed(top_speed) {}
    SportCar():SportCar("",0,0){}
    int get_top_speed() {
      return _top_speed;
    } 
};

int main() {
  Car* a_car = new SportCar("BMW", 2007, 250);
  std::cout << a_car->get_top_speed() << std::endl; 
}

// output: Error 
// class Car has no member get_top_speed
// expect a_car is type Car but get_top_speed is not in Car. Try to access a function belongs to the child 