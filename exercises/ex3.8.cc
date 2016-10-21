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

  for (decltype(str.size()) i = 0; i < str.size(); i++) {
    str[i] = 'X';
  }

  // decltype(str.size()) i = 0;
  // while (i < str.size()) {
  //   str[i] = 'X';
  // }

  cout << str << endl;
  return 0;
}
