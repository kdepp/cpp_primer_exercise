#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int ia[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

  cout << "range for" << endl;
  for (int (&row)[4] : ia) {
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
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << *(*(ia + i) + j) << " ";
    }
    cout << endl;
  }

  return 0;
}
