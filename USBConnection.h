#ifndef USBCONNECTION_H
#define USBCONNECTION_H
#include <stack>
#include <memory>

class USBConnection {
  private:
    int iD;

    USBConnection(int iD);

  public:
    static std::stack<int> ids;
    static USBConnection* CreateUSBConnection() {
      if (ids.empty()) {
          return nullptr;
      }

      int id = ids.top();
      ids.pop();
      return new USBConnection(id);
    }
    ~USBConnection() {
      ids.push(iD);
    }
    int get_id() const {
      return iD;
    }

};

std::stack<int> USBConnection::ids({3, 2, 1});

#endif