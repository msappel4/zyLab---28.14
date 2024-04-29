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

   // define variables
   string itemName;
   string itemDescription;
   string newName;
   int itemPrice;
   int itemQuantity;
   int newQuantity;
   ItemToPurchase newItem;
   ItemToPurchase modifiedItem;
   

   switch (option) {

      case 'o':
         cout << "OUTPUT SHOPPING CART" << endl;
         theCart.PrintTotal();
         break;

      case 'i':
         theCart.PrintDescriptions();
         break;

      case 'a':
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         getline (cin, itemName);
         newItem.SetName(itemName);
         cout << "Enter the item description:" << endl;
         getline (cin, itemDescription);
         newItem.SetDescription(itemDescription);
         cout << "Enter the item price:" << endl;
         cin >> itemPrice;
         newItem.SetPrice(itemPrice);
         cout << "Enter the item quantity:" << endl;
         cin >> itemQuantity;
         newItem.SetQuantity(itemQuantity);
         theCart.AddItem(newItem);
         break;

      case 'd':
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter name of item to remove:" << endl;
         getline (cin, itemName);
         theCart.RemoveItem (itemName);
         break;

      case 'c':
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout << "Enter the item name:" << endl;
         getline (cin, newName);
         cout << "Enter the new quantity:" << endl;
         cin >> newQuantity;
         modifiedItem.SetName(newName);
         modifiedItem.SetQuantity(newQuantity);
         theCart.ModifyItem (modifiedItem);
         break;

      case 'q':
         break;
         
      default:
         // option = ' ';
         // cout << "Choose an option:" << endl;
         // cin.clear();
         // cin.ignore();
         // option = getchar();
         // ExecuteMenu (option, theCart);
         break;
   }
}

int main() {

   // define variables
   string name;
   string date;
   char option = ' ';

   // input name
   cout << "Enter customer's name:" << endl;
   getline(cin, name);

   // input date
   cout << "Enter today's date:" << endl;
   getline(cin, date);

   // output name and date
   cout << endl;
   cout << "Customer name: " << name << endl;
   cout << "Today's date: " << date << endl;

   // create ShoppingCart object
   ShoppingCart myCart(name, date);

   // call PrintMenu
   cout << endl;
   PrintMenu();
   cout << endl;

   // call for option input
   // cout << "Choose an option:" << endl;
   // option = getchar();
   // while (option != 'q'){
   //    // call ExecuteMenu
   //    ExecuteMenu(option, myCart);
   //    cin.clear();
   //    cin.ignore();
   //    cout << "Choose an option:" << endl;
   //    option = getchar();
   // }
  // ExecuteMenu(option, myCart);
    option = ' ';
    do {
        cout << "Choose an option:" << endl;
        cin >> option;
        if (cin.peek() == '\n') {
    cin.ignore();
}

        if (option != 'q') {
            ExecuteMenu(option, myCart);
            if (option == 'o' || option == 'i' || option == 'a' || option == 'd' || option == 'c') {
                   cout << endl;
                PrintMenu();
                   cout << endl;
            }
        }
    } while (option != 'q');

   
   return 0;
}
