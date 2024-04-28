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

// Note - probably not correct, FINISH
void ShoppingCart::RemoveItem(string itemName) {
  try {
    for (int i = 0; i < (cartItems.size() + 1); i++) {
        if ((cartItems.at(i)).GetName() == itemName) {
          cartItems.erase(i);
          break
        }
    }
    throw logic_error("Item not found in cart.");
  }
  catch (logic_error& excpt) {
    cout << "Item not found in cart. Nothing removed." << endl;
  }

// Note - also probably not correct, FINISH
void ShoppingCart::ModifyItem(ItemToPurchase item) {
  try {
    for (int i = 0; i < (cartItems.size() + 1); i++) {
      if (item.GetDescription() != "none") {
        if (item.GetPrice(0 != 0) {
          if (item.GetQuantity() != 0) {

          }
        }
      }
    }
  }
}

int ShoppingCart::GetNumItemsInCart() {
  int numTotal = 0;
  for (int i = 0; i < cartItems.size(); i++) {
    numTotal += (cartItems.at(i)).GetQuantity();
  }
  return numTotal;
}

int ShoppingCart::GetCostOfCart() {
  int costTotal = 0;
  for (int i = 0; i < cartItems.size(); i++) {
    costTotal += (cartItems.at(i)).GetPrice());
  }
  return costTotal;
}

void ShoppingCart::PrintTotal() {
  cout << customerName << "'s Shopping Cart - " << currentDate << endl;
  cout << "Number of Items: " << GetNumItemsInCart() << endl;
  cout << endl;
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
}
  
  
