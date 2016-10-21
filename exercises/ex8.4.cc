#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {
  vector<string> lines;
  string str;
  string filename = "./p36.cc";
  std::ifstream is(filename);

  while (std::getline(is, str)) {
    lines.push_back(str);
  }

  for (auto s : lines) {
    cout << s << endl;
  }

  return 0;
}
