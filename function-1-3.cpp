#include <iostream>

void count_digits(int array[4][4]) {
  int zero = 0;
  int one = 0;
  int two = 0;
  int three = 0;
  int four = 0;
  int five = 0;
  int six = 0;
  int seven = 0;
  int eight = 0;
  int nine = 0;

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 4; col++) {
      switch (array[row][col]) {
        case 0:
          zero++;
          break;
        
        case 1:
          one++;
          break;

        case 2:
          two++;
          break;
        
        case 3:
          three++;
          break;

        case 4:
          four++;
          break;
        
        case 5:
          five++;
          break;
        
        case 6:
          six++;
          break;

        case 7:
          seven++;
          break;
        
        case 8:
          eight++;
          break;

        case 9:
          nine++;
          break;
      }
    }
  }
  std::cout << "0:" << zero << ";1:" << one << ";2:" << two << ";3:" << three << ";4:" << four << ";5:" << five << ";6:" << six << ";7:" << seven << ";8:" << eight << ";9:" << nine << ";" << std::endl;
}