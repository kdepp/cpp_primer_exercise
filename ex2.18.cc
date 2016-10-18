#include <iostream>

int main() {
  int i = 1;
  int *pi = &i;

  std::cout << pi << " -> " << *pi << std::endl;
  return 0;
}
