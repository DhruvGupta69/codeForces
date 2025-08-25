#include <iostream>
using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int slices = c * d, booze = k * l, toast = 0;

  while (slices >= n && booze >= n * nl && p >= n * np) {
    toast++;
    slices -= n;
    booze -= n*nl;
    p -= n*np;
  }

  cout<<toast;

  return 0;
}
