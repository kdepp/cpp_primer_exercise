#include <iostream>

int main() {
  int sum = 0, val = 10;

  while (val > 0) {
    sum = sum + val;
    val--;
  }

  std::cout << "Sum from 10 to 1 is " << sum << std::endl;
  return 0;
}
