#include <iostream>

int main() {
  int v1 = 0;
  int v2 = 0;

  std::cout << "Enter two numbers to get the product" << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The product of ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 * v2;

  return 0;
}
