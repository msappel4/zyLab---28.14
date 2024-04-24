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
   /* Type your code here */
   
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
   bool valid;
   
   while (option != 'q'){
      
      if (option == 'a' || option == 'd' || option == 'c' || option == 'i' || option == 'o' || option == 'q'){
         valid = true;
         if (option == 'q'){
            break;
         }
         else {
            ExecuteMenu (option, cart);
         }
      }
      else {
         valid = false;
         cout << "Enter a valid choice: " << endl;
         cin >> option;
      }
   }
 
   return 0;
}
