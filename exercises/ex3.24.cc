#include <vector>
#include <string>
#include <iostream>
#include <cmath>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> list;
  int a;

  while (cin >> a) {
    list.push_back(a);
  }

  auto size = list.end() - list.begin();
  vector<int> xs1(ceil(size / 2.0));
  vector<int> xs2(ceil(size / 2.0));

  for (auto s = list.begin(); s != list.end(); s++) {
    auto i = s - list.begin();
    xs1[floor(i / 2.0)] += list[i];
    xs2[fmin(i, size - 1 - i)] += list[i];
  }

  cout << "list 1" << endl;
  for (int i : xs1) {
    cout << i << endl;
  }

  cout << "list 2" << endl;
  for (int i : xs2) {
    cout << i << endl;
  }

  return 0;
}
