#include <iostream>
#include "Invoice.h"

class InvoiceTest {
  public: 
    void runTests() {
      testAddServiceCost();
      testInvoiceConstructor();
      testInvoice();
    }

  private:
    void testAddServiceCost() {
      {
      Invoice invoice("ABCD");
      invoice.addServiceCost(10);
      if (invoice.getDollarsOwed() != 10) {
        std::cout << "Test 1 failed!" << std::endl;
      }
      }
      { 
        Invoice invoice("ABCD");
        invoice.addServiceCost(1);
        if (invoice.getDollarsOwed() != 1){
          std::cout << "Test 2 failed!" << std::endl;
        }
      }
    }

    void testInvoiceConstructor() {
      Invoice invoice();
      std::cout << "Invoice is empty" << std::endl;
    }

    void testInvoice() {
      Invoice invoice("A");
      std::cout << "There is an invoice" << std::endl;
    }
};
