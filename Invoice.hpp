/************************************************************************
* Name: Exercise 3.10 (Invoice Class)
* File: Invoice.hpp
* Author: Milo Osterman
* Date: 3/30/2021
 *************************************************************************/

#include <string>

class Invoice{
public:
    Invoice(std::string partNum, std::string partDesc, int quantity, int price);
    void setPartNumber(std::string partNum);
    std::string getPartNumber() const;
    void setPartDescription(std::string partDesc);
    std::string getPartDescription() const;
    void setQuantityPurchased(int quantity);
    int getQuantityPurchased() const;
    void setPricePerItem(int price);
    int getPricePerItem() const;
    int getInvoiceAmount();
    
private:
    std::string partNumber;
    std::string partDescription;
    int quantityPurchased{0};
    int pricePerItem{0};
    
};

