#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int matrix[n][3];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> matrix[i][j];
    }
  }

  int solve = 0;
  for (int i = 0; i < n; i++) {
    if(matrix[i][0] + matrix[i][1] + matrix[i][2] >= 2) solve++;
  }

  cout << solve;

  return 0;
}
