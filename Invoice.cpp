#include "Invoice.h"
#include <iostream>
#include <string>

Invoice::Invoice() {
  invoiceID = "";
  dollarsOwed = 0;
}

Invoice::Invoice(std::string invoiceID): invoiceID(invoiceID), dollarsOwed(dollarsOwed) {}

int Invoice::addServiceCost(int costDollars) {
  if (costDollars < 0) {
    std::cout << "Not a positive amount" << std::endl;
  }

  int sum = costDollars + dollarsOwed;
  
  return sum;
}

int Invoice::getDollarsOwed() const {
  return dollarsOwed;
}

std::string Invoice::getInvoiceID() {
  return invoiceID;
}