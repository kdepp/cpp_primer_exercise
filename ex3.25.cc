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
  vector<int> grades(11);
  auto beg = grades.begin();
  int a;

  while (cin >> a) {
    // Note: ++ doesn't work
    *(beg + a / 10) += 1;
  }

  for (auto i : grades) {
    cout << i << endl;
  }

  return 0;
}
