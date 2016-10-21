#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

void checkInt(vector<int> list) {
  std::cout << "int list length: " << list.size() << std::endl;
  for (auto i : list) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}

void checkString(vector<string> list) {
  std::cout << "string list length: " << list.size() << std::endl;
  for (auto i : list) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}

int main() {
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  checkInt(v1);
  checkInt(v2);
  checkInt(v3);
  checkInt(v4);
  checkInt(v5);
  checkString(v6);
  checkString(v7);

  return 0;
}
