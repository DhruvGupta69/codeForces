#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int soldiers[n];
  int maxV = -1, minV = 101;
  int maxI = -1, minI = -1;
  for (int i = 0; i < n; i++) {
    cin >> soldiers[i];

    if (soldiers[i] > maxV) {
      maxV = soldiers[i];
      maxI = i;
    }
    if (soldiers[i] <= minV) {
      minV = soldiers[i];
      minI = i;
    }
  }

  int moves = maxI + (n - 1 - minI);

  if (maxI > minI)
    moves--;
  cout << moves;

  return 0;
}
