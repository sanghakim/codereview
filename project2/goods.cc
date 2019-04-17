#include "./goods.h"

// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(const int index, const int price) {
  goods_index_ = index;
  goods_price_ = price;
}

// Return index information
int Goods::GetIndex() {
  return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() {
  return goods_price_;
}
