#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;

int main() {
  string str;

  while (cin >> str) {
    cout << str << std::endl;
  }

  return 0;
}
