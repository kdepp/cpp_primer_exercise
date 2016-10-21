#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  string s1, s2;

  cout << "Enter two words" << endl;
  cin >> s1 >> s2;

  if (s1 == s2) {
    cout << "Equal" << endl;
  } else {
    if (s1.size() == s2.size()) {
      cout << "Same size";
    }

    cout << (s1 > s2 ? s1 : s2) << " is larger";
  }

  return 0;
}
