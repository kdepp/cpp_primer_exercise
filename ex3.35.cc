#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int xs[] = {1, 2, 3, 4, 5};
  int *beg = std::begin(xs);
  int *end = std::end(xs);

  while (beg != end) {
    *beg = 0;
    beg++;
  }

  for (auto i : xs) {
    cout << i << endl;
  }

  return 0;
}
