#include <iostream>
#include <stack>
#include "USBConnection.h"
using namespace std;

int main() {
  int max_usb_ports = 10;
  USBConnection* c[max_usb_ports];
  for (int i = 0; i < max_usb_ports; i++) {
    c[i] = USBConnection::CreateUSBConnection();
    if (c[i] != nullptr) {
      cout << "USB connection with ID = " << c[i]->get_id() << " was created\n"; 
    } else {
      cout << "no more USB ports available\n";
    }
  }

  delete c[1];

  USBConnection* a = USBConnection::CreateUSBConnection();
  if (a!= nullptr) {
    cout << "USB connection with ID = " << a->get_id() << "was created\n";
  } else {
    cout << "no more USB ports available\n";
  }

  return 0;
}