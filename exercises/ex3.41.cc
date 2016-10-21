#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  int a1[] = {1, 2, 3, 4, 5};
  int a2[5];
  vector<int> v1 = {std::begin(a1), std::end(a1)};

  for (auto i = v1.begin(); i != v1.end(); i++) {
    a2[i - v1.begin()] = *i;
  }

  cout << "copy from array to vector, result: " << endl;
  for (auto i : v1) {
    cout << i << endl;
  }

  cout << "copy from vector to array, result: " << endl;
  for (auto i : a2) {
    cout << i << endl;
  }
  return 0;
}
