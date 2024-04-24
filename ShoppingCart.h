#ifdef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"

class ShoppingCart {
   public:
      ShoppingCart();
      ShoppingCart(string customerName, string currenDate);
      string GetCustomerName();
      string GetDate();
      void AddItem(ItemToPurchase item);
      void RemoveItem(string itemName);
      void ModifyItem(ItemToPurchase item);
      int GetNumItemsInCart();
      double GetCostOfCart();
      void PrintTotal();
      void PrintDescriptions();
   private:
      string customerName;
      string currentDate;
      vector <ItemToPurchase> cartItems;
};
#endif
