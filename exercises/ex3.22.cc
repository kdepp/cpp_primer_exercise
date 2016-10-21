#include <vector>
#include <string>
#include <iostream>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<string> lines;
  string s;

  while (getline(cin, s)) {
    lines.push_back(s);
  }

  for (auto s = lines.begin(); s != lines.end() && !s->empty(); s++) {
    for (auto c = s->begin(); c != s->end(); c++) {
      *c = toupper(*c);
    }
    
    cout << *s << endl;
  }

  return 0;
}
