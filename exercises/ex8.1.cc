#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::istream;

istream& myRead(istream& is) {
  int a;
  while (true) {
    is >> a;
    cout << a << endl;

    if (is.eof()) {
      is.clear();
      break;
    }

    if (!is) {
      cout << "cin.bad(): " << is.bad() << endl;
      cout << "cin.fail(): " << is.fail() << endl;
      cout << "cin.eof(): " << is.eof() << endl;
      cout << "cin.good(): " << is.good() << endl;
      cout << "before clear: " << is.rdstate() << endl;
      cin.clear();
      //cin.ignore(1000);
      cout << "cin.bad(): " << is.bad() << endl;
      cout << "cin.fail(): " << is.fail() << endl;
      cout << "cin.eof(): " << is.eof() << endl;
      cout << "cin.good(): " << is.good() << endl;
      cout << "after clear: " << is.rdstate() << endl;
      cout << "!!!!!!cleared!!!!!!" << endl;
      continue;
    }
  }

  return cin;
}

int main() {
  int n;
  string s;
  istream& is = myRead(cin);
  //cin >> s;
  //cin >> n;
  cout << "number: " << n;
  return 0;
}
