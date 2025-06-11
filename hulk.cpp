#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string msg = "";
  for (int i = 1; i <= n; i++) {
    msg += "I ";
    if (i % 2 == 0)
      msg += "love ";
    else
      msg += "hate ";

    if (i != n)
      msg += "that ";
  }

  msg += "it";
  cout << msg;

  return 0;
}
