#include <iostream>
using namespace std;

int main() {

  int mat[5][5];
  pair<int, int> oneCell;
  pair<int, int> mid = {2, 2};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> mat[i][j];
      if (mat[i][j] == 1) {
        oneCell.first = i;
        oneCell.second = j;
      }
    }
  }

  cout << abs(mid.first - oneCell.first) + abs(mid.second - oneCell.second);

  return 0;
}
