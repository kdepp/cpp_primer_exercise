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

  for (char &c : str) {
    c = 'X';
  }

  cout << str << endl;
  return 0;
}
