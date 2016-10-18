#include <iostream>

int main() {
  int a = 0, b = 0;
  int le;
  int gt;
  std::cout << "Enter two integers" << std::endl;
  std::cin >> a >> b;

  if (a > b) {
    le = b;
    gt = a;
  } else {
    le = a;
    gt = b;
  }

  while (le <= gt) {
    std::cout << le << std::endl;
    le++;
  }

  return 0;
}
