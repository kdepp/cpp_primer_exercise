#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> list;
  int n;

  while (cin >> n) {
    list.push_back(n);
  }

  for (int i : list) {
    cout << i << endl;
  }

  return 0;
}
