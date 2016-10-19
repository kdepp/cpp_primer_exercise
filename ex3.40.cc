#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;


int main() {
  const char s1[]  = "what";
  const char s2[]  = "up";
  char s3[7] = {};

  strcpy(s3, s1);
  strcat(s3, s2);

  cout << "concat " << s1 << " with " << s2 << ", result: " << s3 << endl;
  return 0;
}
