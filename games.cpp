#include <iostream>
#include <utility>
using namespace std;

int main() {
  int n;
  cin >> n;

  pair<int, int> uni[n];
  for (int i = 0; i < n; i++) {
    cin >> uni[i].first >> uni[i].second;
  }

  int changes = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (uni[i].second == uni[j].first)
        changes++;
    }
  }

  cout << changes;

  return 0;
}
