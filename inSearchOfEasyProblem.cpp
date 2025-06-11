#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int diff;
  while (n != 0) {
    cin >> diff;
    if (diff == 1) {
      cout << "HARD";
      return 0;
    }
    n--;
  }

  cout << "EASY";

  return 0;
}
