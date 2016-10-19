#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (auto i = list.begin(); i != list.end(); i++) {
    *i *= 2;
  }

  for (auto i = list.begin(); i != list.end(); i++) {
    cout << *i << endl;
  }

  return 0;
}
