#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string str = "abc";

  for (auto &c : str) {
    c = 'X';
  }

  cout << str << endl;
  return 0;
}
