// this is my test comment
// github is dumb!

#include <iostream>
#include <stdexcept>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

ShoppingCart::ShoppingCart() {
  customerName = "none";
  currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, string date) {
  customerName = name;
  currentDate = date;
  vector <ItemToPurchase> cartItems;
}

string ShoppingCart::GetCustomerName() {
  return customerName;
}

string ShoppingCart::GetDate() {
  return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
  cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName) {
  bool isInCart = false;
  for (int i = 0; i < cartItems.size(); i++) {
     if (cartItems.at(i).GetName() == itemName) {
        cartItems.erase(cartItems.begin() + i);
        isInCart = true;
        break;
      }
   }
  if (!isInCart) {
     cout << "Item not found in cart. Nothing removed." << endl;
  }
}

// Note - also probably not correct, FINISH
void ShoppingCart::ModifyItem(ItemToPurchase item) {
   bool isInCart2 = false;
   for (int i = 0; i < cartItems.size(); i++) {
      if (cartItems.at(i).GetName() == item.GetName()) {
         isInCart2 = true;
         if (cartItems.at(i).GetName() != "none") {
            cartItems.at(i).SetName("none");
         }
         if (cartItems.at(i).GetPrice() != 0) {
            cartItems.at(i).SetPrice(0);
         }
         if (cartItems.at(i).GetQuantity() != 0) {
            cartItems.at(i).SetPrice(0);
         }
         if (cartItems.at(i).GetDescription() != "none") {
            cartItems.at(i).SetDescription("none");
         }
         break;
      }
   }
   if (!isInCart2) {
     cout << "Item not found in cart. Nothing modified." << endl;
   }
}

int ShoppingCart::GetNumItemsInCart() {
  int numTotal = 0;
  for (int i = 0; i < cartItems.size(); i++) {
    numTotal += (cartItems.at(i)).GetQuantity();
  }
  return numTotal;
}

double ShoppingCart::GetCostOfCart() {
  int costTotal = 0;
  for (int i = 0; i < cartItems.size(); i++) {
    costTotal += (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
  }
  return costTotal;
}

void ShoppingCart::PrintTotal() {
  cout << customerName << "'s Shopping Cart - " << currentDate << endl;
  int numItems = GetNumItemsInCart();
  cout << "Number of Items: " << numItems << endl;
  cout << endl;
  if (numItems == 0) {
     cout << "SHOPPING CART IS EMPTY" << endl;
  for (int i = 0; i < cartItems.size(); i++) {
    cout << (cartItems.at(i)).GetName() << " " << (cartItems.at(i)).GetQuantity() << " @ $" << (cartItems.at(i)).GetPrice() << endl;
  }
  cout << endl;
  cout << "Total: $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions() {
  cout << customerName << "'s Shopping Cart - " << currentDate << endl;
  cout << endl;
  cout << "Item Descriptions" << endl;
  for (int i = 0; i < cartItems.size(); i++) {
    cout << (cartItems.at(i)).GetName() << ": " << (cartItems.at(i)).GetDescription() << endl;
  }
  if (cartItems.size() == 0) {
     cout << "SHOPPING CART IS EMPTY" << endl;
  }
}
  
  
