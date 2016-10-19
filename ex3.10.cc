#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string str;
  cin >> str;

  for (auto c: str) {
    if (ispunct(c)) continue;
    cout << c;
  }

  cout << endl;
  return 0;
}
