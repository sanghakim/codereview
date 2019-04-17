#include <iostream>
#include "./shopping.h"

int main(int argc, char* argv[]) {
  Shopping shoppingList;
  
  shoppingList.PushList(new Goods(2, 3000));
  shoppingList.PushList(new Goods(1, 5000));
  shoppingList.PushList(new Goods(3, 1000));

  shoppingList.PrintList();

  shoppingList.SortByPrice();

  shoppingList.PrintList();

  shoppingList.SortByIndex();

  shoppingList.PrintList();

  return 0;
}
