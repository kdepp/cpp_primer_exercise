#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
  vector<string> list;
  string s;

  while (cin >> s) {
    list.push_back(s);
  }

  for (string t : list) {
    cout << t << endl;
  }

  return 0;
}
