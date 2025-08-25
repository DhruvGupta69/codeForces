#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int cards[n];

  for (int i = 0; i < n; i++) {
    cin >> cards[i];
  }

  int sereja = 0, dima = 0;

  int l = 0, r = n - 1;
  bool turn = true;
  while (l <= r) {
    if (turn) {
      if (cards[l] > cards[r]) {
        sereja += cards[l];
        l++;
      } else {
        sereja += cards[r];
        r--;
      }
      turn = false;
    } else {
      if (cards[l] > cards[r]) {
        dima += cards[l];
        l++;
      } else {
        dima += cards[r];
        r--;
      }
      turn = true;
    }
  }

  cout << sereja << " " << dima;

  return 0;
}
