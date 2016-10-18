#include <iostream>
#include <string>
#include "sales_item.h"

int main() {
  Sales_item item, last;
  int cnt = 0;

  while (std::cin >> item) {
    if (last.isbn().length() == 0) {
      last = item;
      cnt = 1;
    } else {
      if (last.isbn() == item.isbn()) {
        cnt++;
      } else {
        std::cout << last.isbn() << " has " << cnt << " transactions" << std::endl;
        last = item;
        cnt = 1;
      }
    }
  }

  std::cout << last.isbn() << " has " << cnt << " transactions" << std::endl;
  return 0;
}
