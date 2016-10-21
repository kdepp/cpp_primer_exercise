#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int i = ~'q' <<  6;
  cout << "char size: " << sizeof(char) << endl;
  cout << "int size: " << sizeof(int) << endl;
  cout << "~'q' << 6: (signed) " << (~'q' <<  6) << endl;
  cout << "~'q' << 6: (unsigned) " << i << endl;

  return 0;
}
