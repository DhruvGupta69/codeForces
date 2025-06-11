#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  int grps = 1;
  string magnets[n];
  for (int i = 0; i < n; i++) {
    cin >> magnets[i];
  }

  for (int i = 0; i < n - 1; i++) {
    if (magnets[i] != magnets[i + 1]) {
      grps++;
    }
  }

  cout << grps;

  return 0;
}
