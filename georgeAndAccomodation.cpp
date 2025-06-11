#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  pair<int, int> rooms[n];

  int available = 0;
  for (int i = 0; i < n; i++) {
    cin >> rooms[i].first >> rooms[i].second;
    if (rooms[i].second >= 2 && rooms[i].first + 2 <= rooms[i].second)
      available++;
  }

  cout << available;

  return 0;
}
