#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
// VS code

void PrintMenu() {
   /* Type your code here */
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
}

int main() {
   // define variables
   string name;
   string date;
   
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
    
 
   return 0;
}
