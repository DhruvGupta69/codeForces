#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;
  int amazing = 0, minVal = 0, maxVal = 0;

  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    if (i == 0) {
      minVal = val;
      maxVal = val;
    } else {
      if (val > maxVal)
        amazing++;
      else if (val < minVal)
        amazing++;
      minVal = min(minVal, val);
      maxVal = max(maxVal, val);
    }
  }

  cout << amazing;

  return 0;
}
