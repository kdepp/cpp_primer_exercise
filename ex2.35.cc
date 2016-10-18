#include <iostream>

int main() {
  const int i = 42;
  auto j = i; const auto &k = i; auto *p = &i;
  const auto j2 = i, &k2 = i;

  k = 11;  // read-only error
  k2 = 22; // read-only error
  p = 11   // ok
  *p = 22  // read-only error

  return 0;
}
