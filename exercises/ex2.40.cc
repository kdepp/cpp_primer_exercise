#include <string>
#include <iostream>

struct Sales_item {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  Sales_item item;
  return 0;
}
