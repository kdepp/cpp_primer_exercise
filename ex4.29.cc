#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int x[10];
  int *p = x;

  cout << sizeof x / sizeof *x << endl;
  cout << sizeof p / sizeof *p << endl;
  cout << "int * " << sizeof(int *) << endl;
  return 0;
}
