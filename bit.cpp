#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  int X = 0;
  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    if (str == "++X")
      ++X;
    else if (str == "X++") {
      X++;
    } else if (str == "--X") {
      --X;
    } else
      X--;
  }

  cout << X;

  return 0;
}
