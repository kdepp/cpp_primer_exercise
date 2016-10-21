#include <iostream>

int main() {
  int i = 55;
  int &refi = i;
  int &refj = refi;

  std::cout << i << " " << refi << " " << refj << std::endl;
  return 0;
}
