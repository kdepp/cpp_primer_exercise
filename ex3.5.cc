#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string text, str;

  text = "";
  cout << "Enter strings to be concatenated" << endl;
  while (cin >> str) {
    if (str == "done")  break;
    text += str;
  }
  cout << "Result:" << text << endl;

  text = "";
  cout << "Enter strings to be joined with a space" << endl;
  while (cin >> str) {
    if (str == "done")  break;
    text += " " + str;
  }
  cout << "Result:" << text << endl;

  return 0;
}
