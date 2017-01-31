#include <iostream>

#include "imaginary.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
  Imaginary a(3,4);
  Imaginary b(2,5);

  cout << a << endl;
  cout << b << endl;
  cout << a + b << endl;
  cout << a - b << endl;
  cout << a * b << endl;

  return 0;
}
