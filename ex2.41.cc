#include <string>
#include <iostream>

struct Sales_item {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

int main() {
  unsigned totalSold = 0;
  double totalRevenue = 0.0;
  std::string bookNo;
  Sales_item item;

  while (std::cin >> item.bookNo >> item.units_sold >> item.revenue) {
    if (bookNo.length() == 0) {
      bookNo = item.bookNo;
    } else {
      if (bookNo != item.bookNo) {
        std::cerr << "BookNo should be the same" << std::endl;
        return -1;
      }
    }

    totalSold += item.units_sold;
    totalRevenue += item.revenue;
  }

  std::cout << bookNo << " -> sold count: " << totalSold << ", total revenue: " << totalRevenue << std::endl;
  return 0;
}
