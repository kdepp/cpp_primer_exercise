#include <vector>
#include <string>
#include <iostream>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<string> list;
  string s;

  while (cin >> s) {
    list.push_back(s);
  }

  for (string s : list) {
    for (char &c : s) {
      c = toupper(c);
    }

    cout << s << endl;
  }

  return 0;
}
