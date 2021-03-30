/************************************************************************
* Name: Exercise 3.10 (Invoice Class)
* File: InvoiceDemo.cpp
* Author: Milo Osterman
* Date: 3/30/2021
 *************************************************************************/

#include "Invoice.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    //Create invoice object with constructor
    Invoice invoiceOne{"15", "Golden hammer", 3, 50};
    
    //Display invoiceOne object using getters
    cout << "Invoice one info\n" << endl <<
    "Part number: " << invoiceOne.getPartNumber() << endl <<
    "Part description: " << invoiceOne.getPartDescription() << endl <<
    "Quantity: " << invoiceOne.getQuantityPurchased() << endl <<
    "Price per item: " << invoiceOne.getPricePerItem() << endl <<
    "Total cost: " << invoiceOne.getInvoiceAmount() << endl;
    
    //Change quantity purchased to 5
    cout << "\nChanging quantity purchased to 5.\n" << endl;
    invoiceOne.setQuantityPurchased(5);
    
    //Display new results
    cout << "Invoice one info\n" << endl <<
    "Part number: " << invoiceOne.getPartNumber() << endl <<
    "Part description: " << invoiceOne.getPartDescription() << endl <<
    "Quantity: " << invoiceOne.getQuantityPurchased() << endl <<
    "Price per item: " << invoiceOne.getPricePerItem() << endl <<
    "Total cost: " << invoiceOne.getInvoiceAmount() << endl;
    
    //Create new invoice showing that negative cost becomes zero
    Invoice invoiceTwo{"20", "Saw with rusty blade", 1, -5};
    
    //Display invoiceTwo results
    cout << "Invoice two info\n" << endl <<
    "Part number: " << invoiceTwo.getPartNumber() << endl <<
    "Part description: " << invoiceTwo.getPartDescription() << endl <<
    "Quantity: " << invoiceTwo.getQuantityPurchased() << endl <<
    "Price per item: " << invoiceTwo.getPricePerItem() << endl <<
    "Total cost: " << invoiceTwo.getInvoiceAmount() << endl;
}
