#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice {
  private:
    std::string invoiceID;
    int dollarsOwed;

  public: 
  Invoice();
  Invoice(std::string invoiceID);
  int addServiceCost(int costDollars);
  int getDollarsOwed() const;
  std::string getInvoiceID();

};

#endif