#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;

  int count[4] = {0}; // count[1], count[2], count[3]

  for (int i = 0; i < str.length(); i += 2) {
    count[str[i] - '0']++;
  }

  bool first = true;
  for (int i = 1; i <= 3; ++i) {
    while (count[i]--) {
      if (!first)
        cout << "+";
      cout << i;
      first = false;
    }
  }

  return 0;
}
