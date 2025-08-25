#include <iostream>
using namespace std;

int main() {
  int k, r;
  cin >> k >> r;

  for (int i = 1;; i++) {
    int last = (k * i) % 10;
    if (last == 0 || last == r) {
      cout << i;
      break;
    }
  }

  return 0;
}
