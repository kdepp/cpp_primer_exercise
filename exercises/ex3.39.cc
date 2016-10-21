#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int cmpString(string s1, string s2) {
  if (s1 == s2) return 0;
  if (s1 > s2)  return 1;
  return -1;
}

int cmpStr(const char *s1, const char *s2) {
  while (*s1 != '\0' && *s2 != '\0') {
    if (*s1 > *s2)  return 1;
    if (*s1 < *s2)  return -1;
    s1++;
    s2++;
  }

  bool s1End = *s1 == '\0';
  bool s2End = *s2 == '\0';

  if (s1End && s2End) return 0;
  if (s1End) return -1;
  return 1;
}

int main() {
  string s1 = "what";
  string s2 = "who";
  const char s3[]  = "where";
  const char s4[]  = "where";

  cout << "compare " << s1 << " with " << s2 << ", result: " << cmpString(s1, s2) << endl;
  cout << "compare " << s3 << " with " << s4 << ", result: " << cmpStr(s3, s4) << endl;

  return 0;
}
