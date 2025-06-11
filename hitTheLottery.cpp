#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int notes = 0;
  while (n != 0) {
    if (n >= 100) {
      notes += n / 100;
      n %= 100;
    } else if (n >= 20) {
      notes += n / 20;
      n %= 20;
    } else if (n >= 10) {
      notes += n / 10;
      n %= 10;
    } else if (n >= 5) {
      notes += n / 5;
      n %= 5;
    } else {
      notes += n / 1;
      n %= 1;
    }
  }

  cout << notes;

  return 0;
}
