#include <iostream>
#include <climits>
#include "bigint.h"

using std::cout;
using std::cin;
using std::endl;

typedef BigInt::IntList IntList;

int main() {
  IntList i1{3, 2, 1};
  IntList i2{1, 6, 1};
  BigInt a(i1, false);
  BigInt b(i2, false);

  cout << "BigInt Same Sign Add: " << a + b << endl;
  cout << "BigInt Same Sign Subtract: " << b - a << endl;
  return 0;
}
