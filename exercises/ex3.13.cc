#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

int main() {
  vector<string> v6{10};
  vector<string> v7{10, "hi"};
  std::cout << v6[0] << " " << v6.size() << std::endl;
  std::cout << v7[0] << " " << v7.size() << std::endl;
  return 0;
}
