#include <iostream>

using std::cin;
using std::cout;
using std::endl;

typedef int ia4[4];

int main() {
  ia4 ia[3] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

  cout << "range for" << endl;
  for (ia4 &row : ia) {
    for (int ele : row) {
      cout << ele << " ";
    }
    cout << endl;
  }

  cout << "normal for with index" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << ia[i][j] << " ";
    }
    cout << endl;
  }

  cout << "normal for with pointer" << endl;
  for (ia4 *a = ia; a != ia + 3; a++) {
    for (int *b = *a; b != *a + 4; b++) {
      cout << *b << " ";
    }
    cout << endl;
  }

  return 0;
}
