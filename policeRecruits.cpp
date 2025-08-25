#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];

  int crimes = 0, officers = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[n];
    if (a[n] == -1 && officers == 0) {
      crimes++;
    } else if (a[n] == -1 && officers >= 1) {
      officers--;
    } else
      officers += a[n];
  }

  cout << crimes;

  return 0;
}
