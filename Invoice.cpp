/************************************************************************
* Name: Exercise 3.10 (Invoice Class)
* File: Invoice.cpp
* Author: Milo Osterman
* Date: 3/30/2021
 *************************************************************************/

#include "Invoice.hpp"
#include <string>

using namespace std;

    //Constructor
    Invoice::Invoice(string partNum, string partDesc, int quantity, int price)
    : partNumber{partNum}, partDescription{partDesc}, quantityPurchased{quantity}, pricePerItem{price}{
        
    }
    
    //Getters and setters
    void Invoice::setPartNumber(string partNum){
        partNumber = partNum;
    }
    
    string Invoice::getPartNumber() const{
        return partNumber;
    }
    
    void Invoice::setPartDescription(string partDesc){
        partDescription = partDesc;
    }
    
    string Invoice::getPartDescription() const{
        return partDescription;
    }
    
    void Invoice::setQuantityPurchased(int quantity){
        quantityPurchased = quantity;
    }
    
    int Invoice::getQuantityPurchased() const{
        return quantityPurchased;
    }
    
    void Invoice::setPricePerItem(int price){
        pricePerItem = price;
    }
    
    int Invoice::getPricePerItem() const{
        return pricePerItem;
    }
    
    //Get total invoice function, zeros out quantity/price if negative
    int Invoice::getInvoiceAmount(){
        int invoiceAmount;
        
        if (quantityPurchased < 0){
            quantityPurchased = 0;
        }
        
        if (pricePerItem < 0){
            pricePerItem = 0;
        }
        
        invoiceAmount = quantityPurchased * pricePerItem;
        
        return invoiceAmount;
    }
