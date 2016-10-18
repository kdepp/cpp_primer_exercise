#include <iostream>

int main() {
  int sum = 0;

  // ex1.9 in for loop
  for (int n = 50; n <= 100; n++) {
    sum += n;
  }

  std::cout << "Sum from 50 to 100 is " << sum << std::endl;

  // ex1.10 in for loop
  sum = 0;
  for (int n = 10; n >= 1; n--) {
    sum += n;
  }
  std::cout << "Sum from 10 to 1 is " << sum << std::endl;

  // ex1.11 in for loop
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

  for (int n = le; n <= gt; n++) {
    std::cout << n << std::endl;
  }

  return 0;
}
