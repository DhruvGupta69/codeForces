#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string stones;
  cin >> n >> stones;

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (stones[i] == stones[i - 1])
      count++;
  }

  cout << count;

  return 0;
}
