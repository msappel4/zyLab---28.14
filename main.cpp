#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

void PrintMenu() {
   cout << "MENU" << endl;
      cout << "a - Add item to cart" << endl;
      cout << "d - Remove item from cart" << endl;
      cout << "c - Change item quantity" << endl;
      cout << "i - Output items' descriptions" << endl;
      cout << "o - Output shopping cart" << endl;
      cout << "q - Quit" << endl;  
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   switch (option){
      case 'a':
         string itemName;
         string itemDescription;
         int itemPrice;
         int itemQuantity;
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         getline (cin, itemName);
         cout << "Enter the item description:" << endl;
         getline (cin, itemDescription);
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;
         ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
         theCart.AddItem(newItem);
         break;
      case 'd':
         string itemName;
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter the name of the item to remove:" << endl;
         getline (cin, itemName);
         theCart.RemoveItem (itemName);
         break;
      case 'c':
         string itemName;
         int newQuantity;
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout << "Enter the item name:" << endl;
         getline (cin, itemName);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;
         ItemToPurchase modifiedItem (itemName, "", 0, newQuantity);
         the Cart.ModifyItem (modifiedItem);
         break;
      case 'i':
         theCart.PrintDescriptions();
         break;
      case 'o':
         theCart.PrintTotal();
         break;
      case 'q':
         cout << "Quitting" << endl;
         break;
      default:
         cout << "Invalid option. Please try again." << endl;
   }
}

int main() {
   cout << "Enter customer's name:" << endl;
   string name;
   cin >> name;
   cout << "Enter today's date:" << endl;
   string date;
   cin >> date;
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;
   ShoppingCart cart = ShoppingCart(name, date);
   
   PrintMenu();
   cout << endl;
   cout << "Choose an option:";
   char option;
   cin >> option;
   do {
      ExecuteMenu (option, cart);
      cin >> option;
   } while (option != 'q');
 
   return 0;
}
