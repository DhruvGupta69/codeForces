#include <iostream>
#include <string>
using namespace std;

int main() {
  string number;
  cin >> number;

  int luckyCount = 0;
  for (char digit : number) {
    if (digit == '4' || digit == '7') {
      luckyCount++;
    }
  }

  if (luckyCount == 4 || luckyCount == 7)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}
