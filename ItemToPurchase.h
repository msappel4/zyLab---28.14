#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
   
   private:
      string itemName;
      string itemDescription;
      int itemPrice;
      int itemQuantity;
    
   public:
      ItemToPurchase();
      ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity);
      void SetName(string itemName);
      string GetName();
      void SetPrice(int itemPrice);
      int GetPrice();
      void SetQuantity(int itemQuantity);
      int GetQuantity();
      void SetDescription(string itemDescription);
      string GetDescription();
      void PrintItemCost();
      void PrintItemDescription();
};
#endif
