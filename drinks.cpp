#include <iostream>
#include <istream>
using namespace std;

int main() {
  int n;
  cin >> n;

  double drinks[n];
  double orangeVol = 0;
  for (int i = 0; i < n; i++) {
    cin >> drinks[i];
    drinks[i] /= 100;
    orangeVol += drinks[i];
  }

  cout << (orangeVol / n) * 100;

  return 0;
}
