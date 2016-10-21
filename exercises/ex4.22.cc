#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int grade;

  while (cin >> grade) {
    cout << (grade > 90 ? "high pass" : grade >= 75 ? "pass" : grade >= 60 ? "low pass" : "fail") << endl;

    /*
    if (grade >= 75) {
      cout << (grade > 90 ? "high pass" : "pass") << endl;
    } else {
      cout << (grad >= 60 ? "low pass" : "fail") << endl;
    }
    */
  }

  return 0;
}
