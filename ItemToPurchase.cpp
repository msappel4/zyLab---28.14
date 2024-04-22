#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

   ItemToPurchase::ItemToPurchase() {
      itemName = "none";
      itemDescription = "none";
      itemPrice = 0;
      itemQuantity = 0;
   }

   ItemToPurchase::ItemToPurchase(string itemName, string itemDescription, int itemPrice, int itemQuantity){
      this->itemName = itemName;
      this->itemDescription = itemDescription;
      this->itemPrice = itemPrice;
      this->itemQuantity = itemQuantity;
   }
   void ItemToPurchase::SetName(string itemName){
      this->itemName = itemName;
   }
   string ItemToPurchase::GetName(){
      return itemName;
   }
   void ItemToPurchase::SetPrice(int itemPrice){
      this->itemPrice = itemPrice;
   }
   int ItemToPurchase::GetPrice(){
      return itemPrice;
   }
   void ItemToPurchase::SetQuantity(int itemQuantity){
      this->itemQuantity = itemQuantity;
   }
   int ItemToPurchase::GetQuantity(){
      return itemQuantity;
   }
   void ItemToPurchase::SetDescription(string itemDescription){
      this->itemDescription = itemDescription;
   }
   string ItemToPurchase::GetDescription(){
      return itemDescription;
   }
   void ItemToPurchase::PrintItemCost(){
      int itemTotal = itemQuantity * itemPrice;
      cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemTotal << endl;
   }
   void ItemToPurchase::PrintItemDescription(){
      cout << itemName << ": " << itemDescription << endl;
   }
