#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string str;

  cout << "Enter lines" << endl;

  while (std::getline(cin, str)) {
    if (str.size() == 0)  break;
    cout << str << std::endl;
  }

  cout << "Enter words" << endl;

  while (cin >> str) {
    cout << str << std::endl;
  }

  return 0;
}
