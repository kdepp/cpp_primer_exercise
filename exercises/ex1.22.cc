#include <iostream>
#include <string>
#include "sales_item.h"

int main() {
  Sales_item item, sum;

  while (std::cin >> item) {
    if (sum.isbn().length() == 0) {
      sum = item;
    } else if (sum.isbn() == item.isbn()) {
      sum += item;
    }
  }

  std::cout << "Sum is " << sum << std::endl;
  return 0;
}
