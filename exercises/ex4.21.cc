#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> xs = {1, 2, 3, 4, 5};

  for (auto &i : xs) {
    i = i % 2 == 0 ? i : i * 2;
  }

  for (auto i : xs) {
    cout << i << endl;
  }

  return 0;
}
