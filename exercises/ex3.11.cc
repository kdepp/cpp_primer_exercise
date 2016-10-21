#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  const string str = "Keep out!";

  for (auto &c: str) {
    c = toupper(c);  // read-only error
  }

  cout << str << endl;
  return 0;
}
